
@protocol LinkPreviewProvider <NSObject>

@required

- (void)commitLinkPreviewViewController:(UIViewController *)arg1;
- (void)linkPreviewProviderWillDismissPreview;
- (UIViewController *)linkPreviewViewControllerForURL:(NSURL *)arg1;

@end
