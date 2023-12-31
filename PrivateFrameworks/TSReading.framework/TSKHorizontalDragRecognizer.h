
@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {
    UIScrollView * mContainingScrollView;
    struct CGPoint { 
        double x; 
        double y; 
    }  mStartPoint;
}

@property (nonatomic) UIScrollView *containingScrollView;

- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (id)containingScrollView;
- (void)setContainingScrollView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
