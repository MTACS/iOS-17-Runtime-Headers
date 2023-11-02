
@protocol TRAResolutionPoliciesProviding <NSObject>

@required

- (TRAOrientationResolutionPolicyInfo *)orientationResolutionPolicyInfo;
- (void)setOrientationResolutionPolicyInfo:(TRAOrientationResolutionPolicyInfo *)arg1;
- (void)setUserInterfaceStyleResolutionPolicyInfo:(TRAUserInterfaceStyleResolutionPolicyInfo *)arg1;
- (TRAUserInterfaceStyleResolutionPolicyInfo *)userInterfaceStyleResolutionPolicyInfo;

@end
