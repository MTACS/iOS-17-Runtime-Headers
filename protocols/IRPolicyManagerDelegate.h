
@protocol IRPolicyManagerDelegate <NSObject>

@required

- (void)policyManager:(IRPolicyManager *)arg1 didUpdateContexts:(NSDictionary *)arg2 withReason:(NSString *)arg3;

@end
