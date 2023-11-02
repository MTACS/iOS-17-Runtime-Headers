
@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (nonatomic, retain) NSString *exitURL;

- (id)exitURL;
- (id)initWithReason:(long long)arg1;
- (void)setExitTypeWithSuspendReason:(long long)arg1;
- (void)setExitURL:(id)arg1;

@end
