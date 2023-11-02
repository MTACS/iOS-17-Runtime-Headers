
@protocol PRUISPosterEditingViewControllerDelegate <NSObject>

@required

- (void)editingViewController:(PRUISPosterEditingViewController *)arg1 didFinishWithConfiguration:(PRSPosterConfiguration *)arg2;

@optional

- (void)editingViewControllerDidFinishShowingContent:(PRUISPosterEditingViewController *)arg1;

@end
