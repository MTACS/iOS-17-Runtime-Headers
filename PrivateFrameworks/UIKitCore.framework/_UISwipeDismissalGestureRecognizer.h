
@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer {
    double  _allowableMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalTouchPoint;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalTouchPoint;

+ (bool)_shouldDefaultToTouches;

- (double)allowableMovement;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })originalTouchPoint;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setOriginalTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
