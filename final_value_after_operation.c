int finalValueAfterOperations(char** operations, int operationsSize) {
    int val = 0;
    
    for (int i = 0; i < operationsSize; i++) {
        
        if (operations[i][1] == '+') {
            val += 1;
        } else {
            val -= 1;
        }
    }
    
    return val;
}
