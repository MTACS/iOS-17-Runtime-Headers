
@protocol VUIDocumentCreator <NSObject>

@optional

- (UIViewController<VUIMultiPlayerViewController> *)createMultiPlayerViewControllerWithPlayerViewControllers:(NSArray *)arg1 showingDetails:(bool)arg2;
- (bool)isDocumentViewController:(UIViewController *)arg1 equalToViewController:(UIViewController *)arg2;
- (UIViewController<VUIPlaybackContainerViewController> *)playbackContainerViewController;
- (void)recordImpressionsForViewController:(UIViewController *)arg1;
- (<VUIRootSplitViewController> *)rootSplitViewController;
- (void)scrollViewControllerToTop:(UIViewController *)arg1 animated:(bool)arg2 needsFocusUpdate:(bool)arg3;
- (UIViewController *)viewControllerWithDocumentDataSource:(VUIDocumentDataSource *)arg1 appContext:(VUIAppContext *)arg2 documentOptions:(NSDictionary *)arg3;

@end
