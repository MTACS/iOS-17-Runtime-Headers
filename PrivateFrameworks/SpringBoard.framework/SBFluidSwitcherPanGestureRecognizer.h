
@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {
    SBAppLayout * _initialTouchLeafAppLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    bool  _installedAsSystemGesture;
    SBFluidSwitcherViewController * _switcherViewController;
    SBTouchHistory * _touchHistory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBAppLayout *initialTouchLeafAppLayout;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } initialTouchLocation;
@property (nonatomic) bool installedAsSystemGesture;
@property (readonly) Class superclass;
@property (nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (nonatomic, retain) SBTouchHistory *touchHistory;

- (void).cxx_destruct;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initialTouchLeafAppLayout;
- (struct CGPoint { double x1; double x2; })initialTouchLocation;
- (bool)installedAsSystemGesture;
- (double)peakSpeed;
- (void)reset;
- (void)setInitialTouchLeafAppLayout:(id)arg1;
- (void)setInstalledAsSystemGesture:(bool)arg1;
- (void)setSwitcherViewController:(id)arg1;
- (void)setTouchHistory:(id)arg1;
- (id)switcherViewController;
- (id)touchHistory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
