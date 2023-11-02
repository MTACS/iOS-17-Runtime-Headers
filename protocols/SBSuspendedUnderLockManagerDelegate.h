
@protocol SBSuspendedUnderLockManagerDelegate <NSObject>

@required

- (NSSet *)runningApplicationScenes:(SBSuspendedUnderLockManager *)arg1;
- (SBDeviceApplicationSceneHandle *)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 sceneHandleForScene:(FBScene *)arg2;
- (bool)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 shouldPreventSuspendUnderLockForScene:(FBScene *)arg2;
- (bool)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 shouldPreventUnderLockForScene:(FBScene *)arg2;
- (FBSDisplayConfiguration *)suspendedUnderLockManagerDisplayConfiguration:(SBSuspendedUnderLockManager *)arg1;
- (NSSet *)suspendedUnderLockManagerVisibleScenes:(SBSuspendedUnderLockManager *)arg1;

@end
