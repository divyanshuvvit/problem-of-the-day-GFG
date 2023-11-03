

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    unordered_set<int> squares;
	    
	    for(int i = 0; i < n; i++)
	        squares.insert(arr[i] * arr[i]);
	    }
	    for (int i=0; i < n; i++){
	        for(int j=i + 1; j < n; j++){
	            int a_squared = arr[i] * arr[i];
	            int b_squared = arr[j] * arr[j];
	           
	            int c_squared = a_squared + b_squared;
	            
	            if(squares.find(c_squared) != squares.end()){
	                return true;
	            }
	        }
	    }
	    return false;
	    // code here
	}

int geeks(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Solution obj;
    if(obj.checkTriplet(arr, n)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
