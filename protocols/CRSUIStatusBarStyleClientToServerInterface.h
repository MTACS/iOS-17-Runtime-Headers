
@protocol CRSUIStatusBarStyleClientToServerInterface <NSObject>

@required

- (oneway void)clientAcquireForSiriPresentationWithFenceHandle:(BKSAnimationFenceHandle *)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (oneway void)clientAcquireWithInterfaceStyle:(NSNumber *)arg1 contrast:(NSNumber *)arg2 fenceHandle:(BKSAnimationFenceHandle *)arg3 animationSettings:(BSAnimationSettings *)arg4;
- (oneway void)clientReliquishWithFenceHandle:(BKSAnimationFenceHandle *)arg1 animationSettings:(BSAnimationSettings *)arg2;

@end
