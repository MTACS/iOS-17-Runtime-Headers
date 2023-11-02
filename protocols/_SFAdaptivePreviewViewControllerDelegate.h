
@protocol _SFAdaptivePreviewViewControllerDelegate <NSObject>

@required

- (UIViewController<_SFBrowserViewProviding> *)adaptivePreviewViewController:(_SFAdaptivePreviewViewController *)arg1 requestLinkPreviewViewControllerWithURL:(NSURL *)arg2;

@optional

- (void)adaptivePreviewViewControllerWillDisableLinkPreview:(_SFAdaptivePreviewViewController *)arg1;
- (double)headerViewHeightForAdaptivePreviewViewController:(_SFAdaptivePreviewViewController *)arg1;

@end
