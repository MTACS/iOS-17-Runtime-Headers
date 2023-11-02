
@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>

@optional

- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didCreateScene:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 didLaunchProcess:(FBApplicationProcess *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willCommitSceneUpdate:(FBScene *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willLaunchProcess:(FBApplicationProcess *)arg2;
- (void)transaction:(FBApplicationUpdateScenesTransaction *)arg1 willUpdateScene:(FBScene *)arg2;

@end
