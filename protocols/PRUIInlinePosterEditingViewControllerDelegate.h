
@protocol PRUIInlinePosterEditingViewControllerDelegate <NSObject>

@optional

- (void)inlineEditingViewController:(PRUIInlinePosterEditingViewController *)arg1 didDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)inlineEditingViewController:(PRUIInlinePosterEditingViewController *)arg1 willDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;

@end
