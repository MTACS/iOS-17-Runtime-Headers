
@protocol BCSActionPickerItemDelegate <NSObject>

@required

- (void)actionPickerItem:(BCSActionPickerItem *)arg1 didDismissAlertController:(UIAlertController *)arg2;
- (UIAlertController *)actionPickerItemAlertController:(BCSActionPickerItem *)arg1;

@end
