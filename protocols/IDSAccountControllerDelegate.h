
@protocol IDSAccountControllerDelegate <NSObject>

@optional

- (void)accountController:(IDSAccountController *)arg1 accountAdded:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountDisabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountEnabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountRemoved:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountUpdated:(IDSAccount *)arg2;

@end
