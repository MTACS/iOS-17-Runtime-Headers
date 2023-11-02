
@protocol SKUIViewControllerPreviewing <NSObject>

@required

- (UIViewController *)previewCommitViewController;

@optional

- (void)prepareForCommit;

@end
