
@protocol WebAllowDenyPolicyListener <NSObject>

@required

- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (bool)shouldClearCache;

@end
