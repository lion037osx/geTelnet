#app : socketTCP
all:
	chmod -R 777 *
	chmod 777 *
help:
	@+echo ""
	@+echo ""
	@+echo "*********************************		Help GIT		******************************************"
	@+echo ""
	@+echo "make clone"
	@+echo "		git clone https://github.com/lion037osx/socketTCP.git"
	@+echo "make push"
	@+echo "		git push origin"
	@+echo "make pull"
	@+echo "		git pull origin"
	@+echo "make commit"
	@+echo "		git commit -m \"update\""
	@+echo "make add"
	@+echo "		git add ."
	@+echo "		git commit - m \"update\""
	@+echo "		git push origin master"
	@+echo "make fetch"
	@+echo "make update"
	@+echo "make upgrade"
	@+echo ""
	@+echo "		Copyrigth by Leo"
	@+echo ""
	@+echo ""
clone:
	git clone https://github.com/lion037osx/socketTCP.git
commit:
	git commit -m "update"
add:
	git add .
status:
	git status
	git remote -v
merge:
	git merge
	#git remote -v
upgrade:
	git add .
	git commit -m "update"
	git push origin master
update:
	git pull --all
fetch:
	git fetch origin
push:
	git push origin
pull:
	git pull origin
init:
	echo "# socketTCP" >> README.md
	git init
	git add README.md
	git commit -m "app qt socket client to server"
	git remote add origin https://github.com/lion037osx/socketTCP.git
	git push -u origin master
existing:
	git remote add origin https://github.com/lion037osx/socketTCP.git
	git push -u origin master

