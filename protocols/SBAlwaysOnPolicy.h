
@protocol SBAlwaysOnPolicy <NSObject>

@required

- (void)activateAlwaysOnPolicy;
- (NSString *)analyticsPolicyName;
- (id)analyticsPolicyValue;
- (bool)isAlwaysOnPolicyActive;

@end
