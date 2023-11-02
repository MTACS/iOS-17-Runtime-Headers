
@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate> {
    <SBTapToWakeDelegate> * _delegate;
    bool  _digitizerInTapToWakeMode;
    bool  _digitizerModeRequiresHitTestSuppression;
    bool  _gesturesEnabled;
    bool  _hitTestSuppressionEnabled;
    SBIdleTimerDefaults * _idleTimerDefaults;
    SBInactiveTouchShieldWindow * _inactiveTouchShieldWindow;
    SBFTapToWakeGestureRecognizer * _pencilToWakeGestureRecognizer;
    NSHashTable * _recycledInactiveTouchShieldWindows;
    SBFTapToWakeGestureRecognizer * _tapToWakeGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBTapToWakeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDigitizerInTapToWakeMode, nonatomic) bool digitizerInTapToWakeMode;
@property (nonatomic) bool digitizerModeRequiresHitTestSuppression;
@property (getter=_gesturesEnabled, setter=_setGesturesEnabled:, nonatomic) bool gesturesEnabled;
@property (readonly) unsigned long long hash;
@property (getter=_isHitTestSuppressionEnabled, setter=_setHitTestSuppressionEnabled:, nonatomic) bool hitTestSuppressionEnabled;
@property (nonatomic, retain) SBIdleTimerDefaults *idleTimerDefaults;
@property (getter=_inactiveTouchShieldWindow, nonatomic, readonly) SBInactiveTouchShieldWindow *inactiveTouchShieldWindow;
@property (nonatomic, retain) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer;
@property (getter=_recycledInactiveTouchShieldWindows, nonatomic, readonly) NSHashTable *recycledInactiveTouchShieldWindows;
@property (nonatomic, readonly) bool shouldTapToWake;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer;

+ (bool)isTapToWakeSupported;

- (void).cxx_destruct;
- (void)_evaluateEnablement;
- (bool)_gesturesEnabled;
- (id)_inactiveTouchShieldWindow;
- (bool)_isHitTestSuppressionEnabled;
- (id)_recycledInactiveTouchShieldWindows;
- (void)_setGesturesEnabled:(bool)arg1;
- (void)_setHitTestSuppressionEnabled:(bool)arg1;
- (id)delegate;
- (bool)digitizerModeRequiresHitTestSuppression;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)idleTimerDefaults;
- (id)init;
- (bool)isDigitizerInTapToWakeMode;
- (void)pencilToWakeDidRecognize:(id)arg1;
- (id)pencilToWakeGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setDigitizerInTapToWakeMode:(bool)arg1;
- (void)setDigitizerModeRequiresHitTestSuppression:(bool)arg1;
- (void)setIdleTimerDefaults:(id)arg1;
- (void)setPencilToWakeGestureRecognizer:(id)arg1;
- (void)setTapToWakeGestureRecognizer:(id)arg1;
- (bool)shouldTapToWake;
- (void)tapToWakeDidRecognize:(id)arg1;
- (id)tapToWakeGestureRecognizer;

@end
