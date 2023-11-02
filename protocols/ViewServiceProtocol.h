
@protocol ViewServiceProtocol <NSObject>

@required

- (void)handleStatusBarTap;
- (void)pauseResumeResponse:(NSDictionary *)arg1;
- (void)pidNotification:(NSDictionary *)arg1;
- (void)termsAndConditionsResponse:(NSDictionary *)arg1;

@end
