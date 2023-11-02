
@protocol TUICandidateGridDelegate <UIScrollViewDelegate>

@optional

- (void)candidateGrid:(TUICandidateGrid *)arg1 didAcceptCandidate:(TIKeyboardCandidate *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)candidateGrid:(TUICandidateGrid *)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)candidateGrid:(TUICandidateGrid *)arg1 didMoveHighlightFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)candidateGridNeedsToExpand:(TUICandidateGrid *)arg1;
- (void)candidateGridSelectionDidChange:(TUICandidateGrid *)arg1;

@end
