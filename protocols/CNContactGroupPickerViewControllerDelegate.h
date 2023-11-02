
@protocol CNContactGroupPickerViewControllerDelegate <NSObject>

@required

- (void)groupPicker:(CNContactGroupPickerViewController *)arg1 didSelectGroup:(CNGroup *)arg2;
- (bool)groupPicker:(CNContactGroupPickerViewController *)arg1 shouldEnableGroupWithIdentifier:(NSString *)arg2;
- (void)groupPickerDidCancel:(CNContactGroupPickerViewController *)arg1;

@end
