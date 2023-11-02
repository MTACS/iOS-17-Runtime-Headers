
@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerTouchHistoryProviding, UIInteractionProgressObserver> {
    UIPreviewForceInteractionProgress * _forceObserver;
    double  _forcePercent;
    SBAppSwitcherSettings * _settings;
    SBTouchHistory * _touchHistory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double forcePercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBTouchHistory *touchHistory;

- (void).cxx_destruct;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)dealloc;
- (double)forcePercent;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (double)peakSpeed;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)setTouchHistory:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)touchHistory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
