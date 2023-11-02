
@protocol WFCompactDialogViewControllerDelegate <NSObject>

@required

- (void)dialogViewController:(WFCompactDialogViewController *)arg1 didFinishWithResponse:(WFDialogResponse *)arg2 waitForFollowUpRequest:(bool)arg3;

@end
