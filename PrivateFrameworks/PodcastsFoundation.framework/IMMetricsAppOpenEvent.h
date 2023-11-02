
@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (nonatomic, retain) NSString *referringAppName;
@property (nonatomic, retain) NSString *referringURL;

- (id)initWithReason:(long long)arg1;
- (id)referringAppName;
- (id)referringURL;
- (void)setEnterTypeWithLaunchReason:(long long)arg1;
- (void)setReferringAppName:(id)arg1;
- (void)setReferringURL:(id)arg1;

@end
