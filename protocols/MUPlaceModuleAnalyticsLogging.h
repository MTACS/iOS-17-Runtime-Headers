
@protocol MUPlaceModuleAnalyticsLogging <NSObject>

@required

- (void)instrumentAction:(int)arg1 forModuleType:(long long)arg2 usingFeedbackType:(int)arg3;
- (void)instrumentAction:(int)arg1 target:(int)arg2 eventValue:(NSString *)arg3 moduleType:(long long)arg4 feedbackType:(int)arg5;

@end
