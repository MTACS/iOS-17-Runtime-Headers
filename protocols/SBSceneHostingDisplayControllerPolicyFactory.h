
@protocol SBSceneHostingDisplayControllerPolicyFactory <NSObject>

@required

- (<SBSceneHostingDisplayControllerPolicy> *)policyForConnectingDisplay:(FBSDisplayIdentity *)arg1;
- (void)transformDisplayConfiguration:(FBSDisplayConfiguration *)arg1 forControllersWithBuilder:(FBSDisplayConfigurationBuilder *)arg2;

@end
