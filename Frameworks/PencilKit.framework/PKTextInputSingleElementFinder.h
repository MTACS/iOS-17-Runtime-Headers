
@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder {
    NSSet * _candidateElements;
    bool  _finished;
    PKTextInputElement * _foundElement;
}

@property (nonatomic, readonly) NSSet *candidateElements;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) PKTextInputElement *foundElement;

- (void).cxx_destruct;
- (void)_finishSingleElementSearchIfReadyAtPosition:(struct CGPoint { double x1; double x2; })arg1 coordinateSpace:(id)arg2 candidates:(id)arg3 completion:(id /* block */)arg4;
- (id)candidateElements;
- (void)findSingleElementAtPosition:(struct CGPoint { double x1; double x2; })arg1 coordinateSpace:(id)arg2 completion:(id /* block */)arg3;
- (void)findSingleElementCloseToPosition:(struct CGPoint { double x1; double x2; })arg1 coordinateSpace:(id)arg2 completion:(id /* block */)arg3;
- (id)foundElement;
- (bool)isFinished;

@end
