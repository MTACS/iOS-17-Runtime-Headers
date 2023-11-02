
@protocol IMMetricsControllerProtocol <NSObject>

@required

- (AMSPromise *)flushImmediately;
- (void)recordEvent:(IMAMSMetricsEvent *)arg1;
- (bool)shouldIgnoreDNU;
- (bool)shouldSuppressUserInfo;
- (NSString *)topic;

@end
