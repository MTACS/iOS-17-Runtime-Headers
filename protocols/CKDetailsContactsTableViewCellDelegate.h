
@protocol CKDetailsContactsTableViewCellDelegate <NSObject>

@required

- (void)contactsCell:(CKDetailsContactsTableViewCell *)arg1 didHoverWithState:(long long)arg2;
- (void)contactsCellDidTapFaceTimeVideoButton:(CKDetailsContactsTableViewCell *)arg1;
- (void)contactsCellDidTapMessagesButton:(CKDetailsContactsTableViewCell *)arg1;
- (void)contactsCellDidTapPhoneButton:(CKDetailsContactsTableViewCell *)arg1;

@end
