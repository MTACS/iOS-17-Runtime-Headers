
@protocol CNContactQuickActionsControllerDelegate

@required

- (void)contactQuickActionsController:(CNContactQuickActionsController *)arg1 dismissDisambiguationViewController:(UIViewController *)arg2 forActionType:(NSString *)arg3;
- (void)contactQuickActionsController:(CNContactQuickActionsController *)arg1 presentDisambiguationViewController:(UIViewController *)arg2 forActionType:(NSString *)arg3;

@end
