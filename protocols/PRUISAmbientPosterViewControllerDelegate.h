
@protocol PRUISAmbientPosterViewControllerDelegate <NSObject>

@optional

- (void)ambientPosterViewController:(PRUISAmbientPosterViewController *)arg1 relinquishExtensionInstanceIdentifier:(NSUUID *)arg2;
- (void)ambientPosterViewController:(PRUISAmbientPosterViewController *)arg1 setChromeVisibility:(bool)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 animationFence:(BKSAnimationFenceHandle *)arg4;
- (unsigned long long)ambientPosterViewController:(PRUISAmbientPosterViewController *)arg1 titleAlignmentForInterfaceOrientation:(long long)arg2;
- (NSUUID *)ambientPosterViewControllerRequestExtensionInstanceIdentifier:(PRUISAmbientPosterViewController *)arg1;

@end
