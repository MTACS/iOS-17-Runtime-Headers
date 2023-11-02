
@protocol CNContactPickerDelegate <NSObject>

@optional

- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperties:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperty:(CNContactProperty *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContacts:(NSArray *)arg2;
- (void)contactPickerDidCancel:(CNContactPickerViewController *)arg1;

@end
