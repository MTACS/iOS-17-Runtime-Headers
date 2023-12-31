
@interface UIKBSplitKeyplaneGenerator : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
    long long  _keyboardType;
    double  _leftSideWidestRow;
    UIKeyboardTransitionSlice * _leftSlice;
    double  _rightSideWidestRow;
    UIKeyboardTransitionSlice * _rightSlice;
    NSMutableArray * _rows;
    UIKeyboardSliceSet * _sliceSet;
    UIKBTree * _sourceKeyboard;
    UIKBTree * _sourceKeyplane;
    struct CGSize { 
        double width; 
        double height; 
    }  _splitKeySizeFactor;
    NSDictionary * _splitLayoutHints;
}

- (void).cxx_destruct;
- (void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(bool)arg5 force:(bool)arg6 isDefaultWidth:(bool)arg7;
- (void)addSliceStart:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 end:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startToken:(id)arg3 endToken:(id)arg4 left:(bool)arg5 normalization:(int)arg6 isDefaultWidth:(bool)arg7 row:(int)arg8;
- (void)alignSpaceKeyEdges;
- (void)commitUncommittedSlices;
- (id)finalizeSplitKeyplane;
- (id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2;
- (id)hintsForRow:(id)arg1;
- (id)init;
- (void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2;
- (id)keysOrderedByPosition;
- (void)organizeKeyplaneIntoRows;
- (void)splitRow:(id)arg1;
- (void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 right:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
