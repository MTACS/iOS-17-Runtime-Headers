
@protocol CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate <NSObject>

@required

- (void)addContactsToWhitelistOptionsSheetDidCancel:(UIViewController *)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(UIViewController *)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(UIViewController *)arg1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(UIViewController *)arg1;

@end
