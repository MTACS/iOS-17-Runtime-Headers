
@protocol CNContactContentEditViewControllerDelegate <NSObject>

@optional

- (void)contactEditViewController:(CNContactContentEditViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactEditViewController:(CNContactContentEditViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (bool)contactEditViewController:(CNContactContentEditViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 propertyKey:(NSString *)arg3 propertyIdentifier:(NSString *)arg4;
- (void)contactEditViewControllerRequestsCancelConfirmationAlert:(CNContactContentEditViewController *)arg1;
- (void)contactEditViewControllerWillDismissFullscreen:(CNContactContentEditViewController *)arg1;
- (void)contactEditViewControllerWillPresentFullscreen:(CNContactContentEditViewController *)arg1;

@end
