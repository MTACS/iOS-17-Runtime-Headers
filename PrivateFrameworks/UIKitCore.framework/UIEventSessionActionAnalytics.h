
@interface UIEventSessionActionAnalytics : NSObject {
    NSMutableSet * _accumulators;
    NSString * _bundleID;
    long long  _hardwareKeyboardState;
    _UIEventSessionAction * _lastAction;
    long long  _lastHardwareKeyboardState;
    long long  _lastMagicKeyboardState;
    long long  _lastUIInterfaceOrientation;
    long long  _magicKeyboardState;
    unsigned long long  _maxDepth;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _sessionID;
    long long  _uiInterfaceOrientation;
    UIEventSessionTouchEventAnalyzer * touchAnalyzer;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) NSNumber *sessionID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_instanceOfActionClass:(Class)arg1 source:(long long)arg2;
- (void)addAccumulator:(id)arg1;
- (id)allAccumulatorNames;
- (id)bundleID;
- (void)didHardwareConfigurationChange:(id)arg1;
- (void)didKeyCommand:(id)arg1;
- (void)didPointerClick:(id)arg1 withLocationInWindow:(struct CGPoint { double x1; double x2; })arg2 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)didPointerHover:(id)arg1 withLocationInWindow:(struct CGPoint { double x1; double x2; })arg2 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)didScroll:(id)arg1 withSource:(long long)arg2;
- (void)didShowContextualMenuFromLocation:(struct CGPoint { double x1; double x2; })arg1 withSource:(long long)arg2;
- (void)didTap:(id)arg1 withSource:(long long)arg2;
- (void)didTextSelectionWithSource:(long long)arg1;
- (void)didTouch:(id)arg1 withLocationInWindow:(struct CGPoint { double x1; double x2; })arg2 withWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withTrackpadFingerDownCount:(long long)arg4;
- (void)didTypingWithSource:(long long)arg1;
- (bool)getAIDState;
- (id)init;
- (void)q_addAccumulator:(id)arg1;
- (void)q_addActionAndUpdate:(id)arg1;
- (void)q_enumerateAnalytics:(id /* block */)arg1;
- (void)q_flushRecentActions;
- (void)q_setupDefaultAnalytics;
- (void)q_updateAnalyticsFromAccumulators;
- (void)q_updateHardwareState;
- (void)q_updateUIInterfaceOrientation;
- (void)q_writeAnalytics;
- (void)resetSessionID;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void)updateAIDState;
- (void)updateHardwareKeyboardState;
- (void)updateUIInterfaceOrientation;
- (void)writeAnalytics;
- (void)writeEventWithFields:(id)arg1 andName:(id)arg2;

@end
