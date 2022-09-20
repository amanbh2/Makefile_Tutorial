#Prototype
#Target: Dependencies
#<tab> Shell Commands

#Examples without dependencies
groot:
	echo "I am Groot."

#use of @
ironman:
	@echo "I am Ironman."

#Examples with dependency
love: ironman
	echo "Love you 3000"