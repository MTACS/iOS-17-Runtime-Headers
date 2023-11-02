
@protocol AMSEngagementClientProtocol

@required

- (void)handlePushedEvent:(AMSEngagementPushEvent *)arg1;
- (void)treatmentsDidSyncronize;

@end
