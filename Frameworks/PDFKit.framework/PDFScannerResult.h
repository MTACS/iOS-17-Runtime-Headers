
@interface PDFScannerResult : NSObject {
    PDFScannerResultPrivate * _private;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 onPageLayer:(id)arg2;
- (id)ddResult;
- (double)displayScaleOnPageLayer:(id)arg1;
- (bool)hasActionsForResult;
- (struct __DDHighlight { }*)highlightRef;
- (id)initWithDDScannerResult:(id)arg1 foundOnPage:(id)arg2;
- (bool)pointIsOnButton:(struct CGPoint { double x1; double x2; })arg1;
- (bool)pointIsOnButton:(struct CGPoint { double x1; double x2; })arg1 onPageLayer:(id)arg2;
- (id)rects;
- (bool)resultIsPastDate;
- (void)setButtonPressed:(bool)arg1;
- (void)setHighlightRef:(struct __DDHighlight { }*)arg1;

@end
