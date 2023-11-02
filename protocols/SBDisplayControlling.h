
@protocol SBDisplayControlling <SBDisplayAssertionDelegate>

@required

- (void)connectToDisplayIdentity:(FBSDisplayIdentity *)arg1 configuration:(FBSDisplayConfiguration *)arg2 displayManager:(SBDisplayManager *)arg3 sceneManager:(SBSceneManager *)arg4 caDisplayQueue:(NSObject<OS_dispatch_queue> *)arg5 assertion:(SBDisplayAssertion *)arg6;
- (void)displayIdentityDidDisconnect:(FBSDisplayIdentity *)arg1;
- (void)displayIdentityDidUpdate:(FBSDisplayIdentity *)arg1 configuration:(FBSDisplayConfiguration *)arg2;

@optional

- (NSString *)signpostDescription;

@end
