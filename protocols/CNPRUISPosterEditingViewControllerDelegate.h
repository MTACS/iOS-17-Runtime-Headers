
@protocol CNPRUISPosterEditingViewControllerDelegate <NSObject>

@required

- (void)editingViewController:(CNPRUISPosterEditingViewController *)arg1 didFinishWithConfiguration:(CNPRSPosterConfiguration *)arg2;

@optional

- (void)editingViewControllerDidFinishShowingContent:(CNPRUISPosterEditingViewController *)arg1;

@end
