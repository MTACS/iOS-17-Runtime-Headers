
@protocol CNContactPickerPrivateDelegate <CNContactPickerDelegate>

@optional

- (void)contactPicker:(CNContactPickerViewController *)arg1 didCompleteWithNewContact:(CNContact *)arg2;
- (UIViewController *)contactPickerPresentedViewController:(CNContactPickerViewController *)arg1;
- (void)pickerDidSelectAddNewContact:(CNContactPickerViewController *)arg1;

@end
