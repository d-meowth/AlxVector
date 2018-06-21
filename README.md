# AlxVector
C++ Library for managing and using vectors
## Usage
### Implementation
- Add .h to your project
- Include AlxVec.h in your source code
- Use avec namespace before every function call or add `using namespace avec;`
### Find first in vector:
    avec::ffiv(a, vect)
`a` is what you're looking for.

`vect` is the vector you're looking in.

### Find nth in vector:
    avec::ffiv(a, vect, n)
`a` is what you're looking for.

`vect` is the vector you're looking in.

`n` will return the position of the nth iteration of a.

## Example code
### Find first in vector:
    vector<int> vect{ 1, 2, 3, 4, 6, 3 };
    cout << avec::ffiv(5, vect) << endl;
    cout << avec::ffiv(3, vect) << endl;
Will output:

    -1
    2
### Find nth in vector:

    vector<int> vect{ 1, 2, 3, 4, 6, 3 };
    cout << avec::fniv(3, vect, 1) << endl;
    cout << avec::fniv(3, vect, 2) << endl;
Will output:
  
    2
    5
	
