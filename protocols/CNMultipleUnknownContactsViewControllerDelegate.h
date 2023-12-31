
@protocol CNMultipleUnknownContactsViewControllerDelegate <NSObject>

@required

- (void)multipleUnknownContactsViewControllerDidComplete:(CNMultipleUnknownContactsViewController *)arg1;

@optional

- (bool)multipleUnknownContactsViewController:(CNMultipleUnknownContactsViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;

@end
