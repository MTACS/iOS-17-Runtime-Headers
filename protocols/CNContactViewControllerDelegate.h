
@protocol CNContactViewControllerDelegate <NSObject>

@optional

- (void)contactViewController:(CNContactViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (bool)contactViewController:(CNContactViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;

@end
