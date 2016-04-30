# Movie Marathon
#### Create a list of movies to marathon!
## Project Summary
### What is this?
Are you ever with your significant other and the topic of "We should watch this movie!" comes up? You normally want to see the movie but you end up getting a list that's so long you can't ever remember what to watch or in what order to watch it in. Movie Marathon can help! It provides you with several informational links and resources to help make your next movie night amazing!

## How to Run
If you plan on working through git, use the following commands to clone and run the program:
* Fork branch
* Use `git clone` + your forked repo's url 
* Once cloned type `make` to build the project
* Once built successfully, use `./MovieList`

## Enhancing your Experience
When using this program here are some small tips to help make the experience worth while!
* **Don't** copy and paste links! Instead if you're running on a UNIX system `CTRL` + `SHIFT` + `CLICK`
* If a movie you want is the incorrect one, try putting the year after the title.
 * For example: If you use `find Inside Out` it will return the 2005 movie Inside Out, a Mystery / Drama. If you wanted the animated movie Inside Out, you should use `find Inside Out 2015` and it will return the 2015 animated movie!

#### Commands
Here is a small commands list to refrence
* `Find <movie title>` Finds a movie, and gives a rotten tomatoes link to your movie
* `Add <movie title>` Will add a movie to your list
* `Remove <movie title>` Removes a movie from your list
* `History` - Will peek at your most recent history with the program.
* `Watched` Will remove the first movie in your movie queue.
* `Print` Prints your current movie list
* `Help` Displays the help menu
* `Info` Displays the information menu
* `Quit` Terminates the program and writes movie list to file
  * **Note**: <> denotes a required parameter!

## Grading Requirements

##### One Class
* The one class can be found [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieHandler.cpp) additionally it's header file can be found [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieHandler.h). It's implmentation can be found in the main class located [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieList.cpp#L22).

##### One Data Structure
* The data structure I used was a linked list. It's definition can be found [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieHandler.h#L12). It's implimentation can be found [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieHandler.cpp).

##### Ten Public Methods
* All eleven of the public methods I used can be found [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieHandler.h#L12). Their definitions can be viewed [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieHandler.cpp). Their implementations can be seen [Here](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieList.cpp).

##### The Driver
* The drive class is the [MovieList.cpp](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/blob/master/MovieList.cpp) file. Implementations of all the public methods can be viewed there.

### Dependencies
While there are no third-party dependencies, this program uses several C++11 methods, so C++11 is **required**.
Additionally, g++ is also **required** in order to compile this program.

### System Requirements
* Compiler (g++) and C++11

### Group Members
* Dante Pasionek (Project Lead)

### Contributors
* None

### Open issues/Bugs
* See the [Open Issues](https://github.com/Dpasi314/Pasionek_CSCI2270_FinalProject/issues) list!
