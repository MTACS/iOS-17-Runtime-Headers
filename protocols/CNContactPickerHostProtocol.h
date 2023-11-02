
@protocol CNContactPickerHostProtocol <NSObject>

@required

- (void)pickerDidCancel;
- (void)pickerDidCompleteWithNewContact:(CNContact *)arg1;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(CNContact *)arg1 property:(CNContactProperty *)arg2;
- (void)pickerDidSelectContacts:(NSArray *)arg1 properties:(NSArray *)arg2;

@end
