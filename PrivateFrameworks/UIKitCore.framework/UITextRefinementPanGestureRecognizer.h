
@interface UITextRefinementPanGestureRecognizer : UIPanGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;

- (struct CGPoint { double x1; double x2; })startPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
