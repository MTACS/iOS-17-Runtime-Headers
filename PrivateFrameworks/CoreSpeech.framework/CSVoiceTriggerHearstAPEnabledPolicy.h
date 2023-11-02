
@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy

+ (id)sharedInstance;

- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (bool)_isOtherStreamsActiveOnDoAPRoute;
- (void)_subscribeEventMonitors;
- (id)init;

@end
