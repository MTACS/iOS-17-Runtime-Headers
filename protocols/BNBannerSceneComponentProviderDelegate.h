
@protocol BNBannerSceneComponentProviderDelegate <NSObject>

@required

- (BNBannerClientContainerViewController *)containerViewControllerForBannerSceneComponentProvider:(BNBannerSceneComponentProvider *)arg1;
- (void)sceneWillInvalidateForBannerSceneComponentProvider:(BNBannerSceneComponentProvider *)arg1;

@end
