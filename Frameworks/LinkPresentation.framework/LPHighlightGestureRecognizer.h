
@interface LPHighlightGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPointInWindowCoordinates;
}

- (struct CGPoint { double x1; double x2; })_locationInWindow;
- (void)cancelHighlight;
- (void)startHighlightIfPossible;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateHighlight;

@end
