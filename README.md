# COMPSCI 230 Computer Systems Principles
# Networking Starter Lab

In this lab we give you starter code for the client you might write for Project 6, and a little bit of guidance.

To start working on this lab you must be logged in to the Edlab and in your `cs230` directory, or be in a similar environment on your local machine. 

From this directory run the command:

```
$ git clone https://github.com/marcliberatore/230-lab-networking-starter.git
```

to make a copy of this lab directory, or use [Github Desktop](https://desktop.github.com), or download and decompress a zip file directly from Github to use locally (the green "Code" button has a "Download ZIP" option). Or just download and use `client.c` directly!


However you do it, you will end up with `client.c` available to you. It's a standalone C program that is a very rough outline of what you'll need to do to complete Project 6. The expectation is that you can work on it during lab with your TA and UCAs present to help you if you get stuck.

Use

```
gcc -o client client.c
```

to compile it, and

```
./client
```

to run it. You'll find that it doesn't do much, at first. But you can edit it, following the directions it contains, to build up toward a functioning implementation of the client you need for Project 6.

It's pretty important to work step-by-step on this project -- don't try to write all the code in one large edit; get each part working before moving on to the next, and think carefully about checking return values and including copious logging output to help you figure out what's going on if things go wrong.

Good luck!