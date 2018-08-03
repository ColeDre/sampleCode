#Tic Tac Toe

X= "X"
O = "O"
EMPTY = " "
TIE = "TIE"
NUM_OF_SQUARES = 9

def display_instruct():
	"""Display game instructions."""
	print(
	"""
	Welcome to Tic-Tac-Toe
	0 | 1 | 2
	---------
	3 | 4 | 5
	---------
	6 | 7 | 8
	""")
	
def ask_yes_no(question):
	response = None
	while response not in ("y", "n"):
		response = input(question).lower()
	return response

def ask_number(question, low, high):
	response = None
	while response not in range(low, high):
		response = int(input(question))
	return response
	
def pieces():
	go_first = ask_yes_no("Do You require the first move? (y/n): ")
	if go_first == "y":
		print("\nYou're First")
		human = X
		computer = O
	else:
		print("\nBrave, I'll go")
		computer = X
		human = O
	return computer, human

def new_board():
	board = []
	for square in range(NUM_OF_SQUARES):
		board.append(EMPTY)
	return board
	
def display_board(board):
	print("\n\t", board[0], "|", board[1], "|", board[2])
	print("\t", "--------------")
	print("\t", board[3], "|", board[4], "|", board[5])
	print("\t", "--------------")
	print("\t", board[6], "|", board[7], "|", board[8], "\n")
	
def legal_moves(board):
	moves = []
	for square in range(NUM_OF_SQUARES):
		if board[square] == EMPTY:
			moves.append(square)
	return moves

def winner(board):
	WAYS_TO_WIN = ((0, 1, 2), (3, 4, 5), (6, 7,8), (0, 3, 6), (1, 4, 7), (2, 5, 8), (0,4,8), (2, 4, 6))
	for row in WAYS_TO_WIN:
		if board[row[0]] == board[row[1]] == board[row[2]] != EMPTY:
			winner = board[row[0]]
			return winner
	
	if EMPTY not in board:
			return TIE
	
	return None 
	
def human_move(board, human):
	legal = legal_moves(board)
	move = None
	while move not in legal:
		move = ask_number("Where will you move? (0 - 8):", 0, NUM_OF_SQUARES)
		if move not in legal:
			print("\nThat square is already occupied. foolish human. Choose another.\n")
	print("Fine...")
	return move

def computer_move(board, computer, human):
	"""make computer move"""
	# make a copy to work with since function will be changing list
	board = board[:]
	BEST_MOVES = (4, 0, 2, 6, 8, 1, 3, 5, 7)
	
	print("I shall take square number", end=" ")
	#if computer can win take that move
	for move in legal_moves(board):
		board[move] = computer #Put O at board[move] as it steps through the sequence  
		if winner(board) == computer:
			print(move)
			return move
		#done checking this move undo items
		board[move] = EMPTY
	
	#if human can win block move 
	for move in legal_moves(board):
		board[move] = human #Put x at board[move] as it steps through the sequence  
		if winner(board) == human: 
			print(move)
			return move
		# done checking this move, undo it
		board[move] = EMPTY
	
	#since no can win on next move, pick best open square
	for move in BEST_MOVES:
		if move in legal_moves(board):
			print(move)
			return move

def next_turn(turn):
	"""switch turn"""
	if turn == X:
		return 0
	else: 
		return X
		
def congrat_winner(the_winner, computer, human):
	if the_winner != TIE:
		print(the_winner, "won!\n")
	else:
		print("It's a tie!\n")
	
	if the_winner == computer:
		print("As I predicted I win\n")
	
	elif the_winner == human:
		print("Impossibleeeeee!!!")
	
	elif the_winner == TIE:
		print("Lucky")
		
def main():
	display_instruct()
	computer, human = pieces()
	turn = X
	board = new_board()
	display_board(board)
	
	while not winner(board):
		if turn == human:
			move = human_move(board,human)
			board[move] = human
		else:
			move = computer_move(board, computer, human)
			board[move] = computer
		display_board(board)
		turn = next_turn(turn)
	
	the_winner = winner(board)
	congrat_winner(the_winner, computer, human)

main()
input("Enter to quit")
