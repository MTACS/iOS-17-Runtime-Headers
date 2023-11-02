
@protocol WBSTabGroupConfirmationAlertDelegate <NSObject>

@optional

- (NSURL *)representativeURLForTabGroupConfirmationAlert:(WBSTabGroupConfirmationAlert *)arg1;
- (void)tabGroupConfirmationAlertDidBeginDismissal:(WBSTabGroupConfirmationAlert *)arg1;

@end
