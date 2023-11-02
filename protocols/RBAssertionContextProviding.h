
@protocol RBAssertionContextProviding <NSObject>

@required

- (<RBEntitlementPossessing> *)originatorEntitlements;
- (RBProcess *)originatorProcess;
- (<RBBundleProperties> *)originatorProperties;
- (RBSystemState *)systemState;
- (<RBEntitlementPossessing> *)targetEntitlements;
- (RBProcess *)targetProcess;
- (<RBBundleProperties> *)targetProperties;

@end
