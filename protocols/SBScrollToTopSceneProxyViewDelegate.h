
@protocol SBScrollToTopSceneProxyViewDelegate <NSObject>

@optional

- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(SBScrollToTopSceneProxyView *)arg1 rootedAtWindow:(UIWindow *)arg2;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(SBScrollToTopSceneProxyView *)arg1 rootedAtWindow:(UIWindow *)arg2;

@end
