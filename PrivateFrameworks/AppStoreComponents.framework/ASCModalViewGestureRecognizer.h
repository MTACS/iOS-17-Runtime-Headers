
@interface ASCModalViewGestureRecognizer : UIGestureRecognizer {
    NSMutableSet * _activeTouches;
    UIView * _targetView;
}

@property (nonatomic, readonly) NSMutableSet *activeTouches;
@property (nonatomic, readonly) UIView *targetView;

- (void).cxx_destruct;
- (id)activeTouches;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetView:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (bool)isAnyTouch:(id)arg1 fromEvent:(id)arg2 outsideView:(id)arg3;
- (void)reset;
- (id)targetView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
