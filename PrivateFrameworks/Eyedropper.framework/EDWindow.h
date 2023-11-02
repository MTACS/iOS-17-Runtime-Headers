
@interface EDWindow : UIWindow {
    <EDWindowTrackingDelegate> * _trackingDelegate;
}

@property (nonatomic) <EDWindowTrackingDelegate> *trackingDelegate;

+ (bool)_isSecure;

- (void).cxx_destruct;
- (bool)_canBecomeKeyWindow;
- (bool)_preventsRootPresentationController;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldControlAutorotation;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1;
- (void)setTrackingDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)trackingDelegate;

@end
