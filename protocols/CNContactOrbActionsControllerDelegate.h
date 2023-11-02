
@protocol CNContactOrbActionsControllerDelegate <NSObject>

@required

- (void)contactOrbActionsController:(CNContactOrbActionsController *)arg1 didUpdateWithMenu:(NSArray *)arg2;
- (UIViewController *)presentingViewControllerForActionsController:(CNContactOrbActionsController *)arg1;

@end
