
@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (getter=_eventConfiguration, nonatomic, readonly) _UINotificationFeedbackGeneratorConfiguration *eventConfiguration;

+ (Class)_configurationClass;

- (id)_categoryForType:(long long)arg1;
- (id)_eventConfiguration;
- (void)_playEventType:(long long)arg1;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (void)_privateNotificationInterrupted:(long long)arg1;
- (void)_privateNotificationOccurred:(long long)arg1;
- (id)_stats_key;
- (void)_stopEventType:(long long)arg1;
- (void)notificationOccurred:(long long)arg1;

@end
