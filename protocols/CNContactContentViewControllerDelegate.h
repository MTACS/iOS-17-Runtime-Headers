
@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>

@optional

- (UIViewController *)contactPresentedViewController:(CNContactViewController *)arg1;
- (void)contactViewController:(CNContactContentViewController *)arg1 didChangeToEditMode:(bool)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (bool)contactViewController:(CNContactContentViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 propertyKey:(NSString *)arg3 propertyIdentifier:(NSString *)arg4;

@end
