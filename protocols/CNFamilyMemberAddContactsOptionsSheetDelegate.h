
@protocol CNFamilyMemberAddContactsOptionsSheetDelegate <NSObject>

@required

- (void)addContactsOptionsSheetViewControllerDidCancel:(UIViewController *)arg1;
- (void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(UIViewController *)arg1;
- (void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(UIViewController *)arg1;

@end
