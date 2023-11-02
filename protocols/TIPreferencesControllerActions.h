
@protocol TIPreferencesControllerActions <NSObject>

@required

- (bool)automaticMinimizationEnabled;
- (void)didTriggerOneTimeAction:(NSString *)arg1;
- (unsigned long long)floatingKeyboardDockedEdge;
- (struct CGPoint { double x1; double x2; })floatingKeyboardPosition;
- (NSArray *)inputModeSelectionSequence;
- (struct CGPoint { double x1; double x2; })keyboardPosition;
- (bool)keyboardShownByTouch;
- (bool)oneTimeActionCompleted:(NSString *)arg1;
- (bool)predictionEnabled;
- (void)resetDictationTipsToDefaultSettings;
- (void)setAutomaticMinimizationEnabled:(bool)arg1;
- (void)setFloatingKeyboardDockedEdge:(unsigned long long)arg1;
- (void)setFloatingKeyboardPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputModeSelectionSequence:(NSArray *)arg1;
- (void)setKeyboardPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeyboardShownByTouch:(bool)arg1;
- (void)setPredictionEnabled:(bool)arg1;
- (void)updateCompactAssistantBarPersistentLocation:(unsigned long long)arg1;
- (void)updateDictationAutoPunctuation:(NSNumber *)arg1;
- (void)updateDictationTipDisplayCount:(NSNumber *)arg1 dictationTipKey:(id)arg2;
- (void)updateDictationTipLastShownDate:(NSDate *)arg1;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateEnableProKeyboard:(bool)arg1;
- (void)updateEnabledDictationLanguages:(NSDictionary *)arg1;
- (void)updateIndicatorLastShownDate:(NSDate *)arg1;
- (void)updateKeyboardHandBias:(NSString *)arg1;
- (void)updateKeyboardIsFloating:(bool)arg1;
- (void)updateKeyboardIsSplit:(bool)arg1 locked:(bool)arg2;
- (void)updateLastUsedDictationLanguages:(NSDictionary *)arg1;
- (void)updateLastUsedInputMode:(NSString *)arg1;
- (void)updateLastUsedKeyboards:(NSDictionary *)arg1;
- (void)updateLastUsedLayout:(NSString *)arg1;
- (void)updateVisceral:(NSNumber *)arg1;

@end
