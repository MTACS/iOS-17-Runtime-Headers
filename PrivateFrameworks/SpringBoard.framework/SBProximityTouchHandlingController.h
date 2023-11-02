
@interface SBProximityTouchHandlingController : NSObject <BSInvalidatable> {
    bool  _absorbTouchesBelowStatusBar;
    NSSet * _allowedSystemGestureTypes;
    _SBProximityTouchHandlingViewController * _proxTouchHandlingViewController;
    UIWindow * _proxTouchHandlingWindow;
    double  _statusBarHeight;
    <BSInvalidatable> * _suppressBackBoardTouchCancellation;
    <BSInvalidatable> * _suppressSystemGestures;
    UIWindowScene * _windowScene;
}

@property (nonatomic) bool absorbTouchesBelowStatusBar;
@property (nonatomic, retain) NSSet *allowedSystemGestureTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double statusBarHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)absorbTouchesBelowStatusBar;
- (id)allowedSystemGestureTypes;
- (id)initWithSettings:(id)arg1 touchHandlingDelegate:(id)arg2;
- (void)invalidate;
- (void)setAbsorbTouchesBelowStatusBar:(bool)arg1;
- (void)setAllowedSystemGestureTypes:(id)arg1;
- (void)setStatusBarHeight:(double)arg1;
- (double)statusBarHeight;
- (void)windowSceneDidConnect:(id)arg1;

@end
