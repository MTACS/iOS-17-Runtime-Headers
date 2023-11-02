
@protocol SUUIViewControllerPreviewing <NSObject>

@required

- (UIViewController *)previewCommitViewController;

@optional

- (void)prepareForCommit;

@end
