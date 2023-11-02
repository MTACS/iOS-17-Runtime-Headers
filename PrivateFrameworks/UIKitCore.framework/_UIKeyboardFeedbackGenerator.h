
@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator <_UIKBFeedbackGenerating> {
    double  _lastTypedKeyTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_keyboardConfiguration, nonatomic, readonly) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:, nonatomic) double lastTypedKeyTimestamp;
@property (readonly) Class superclass;

+ (Class)_configurationClass;

- (double)_autoDeactivationTimeout;
- (id)_feedbackWithUpdatedVolume:(id)arg1;
- (id)_keyboardConfiguration;
- (double)_lastTypedKeyTimestamp;
- (void)_playFeedbackForActionType:(long long)arg1 withCustomization:(id /* block */)arg2;
- (void)_setLastTypedKeyTimestamp:(double)arg1;
- (id)_stats_key;
- (void)actionOccurred:(long long)arg1;
- (void)actionOccurred:(long long)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3;

@end
