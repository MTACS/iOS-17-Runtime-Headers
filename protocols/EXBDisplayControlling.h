
@protocol EXBDisplayControlling <EXBDisplayAssertionDelegate>

@required

- (void)connectToDisplayIdentity:(FBSDisplayIdentity *)arg1 configuration:(FBSDisplayConfiguration *)arg2 displayTransformUpdater:(id <EXBDisplayTransformUpdating>)arg3 caDisplayQueue:(NSObject<OS_dispatch_queue> *)arg4 assertion:(EXBDisplayAssertion *)arg5;
- (void)displayIdentityDidDisconnect:(FBSDisplayIdentity *)arg1;
- (void)displayIdentityDidUpdate:(FBSDisplayIdentity *)arg1 configuration:(FBSDisplayConfiguration *)arg2;
- (void)transformDisplayConfigurationWithBuilder:(id <EXBDisplayConfigurationBuilding>)arg1;

@end
