
@protocol VSPSPickerTableViewCellDelegate <NSObject>

@required

- (void)pickerViewCell:(VSPSPickerTableViewCell *)arg1 didSelectRow:(long long)arg2;
- (NSString *)pickerViewCell:(VSPSPickerTableViewCell *)arg1 titleForRow:(long long)arg2;
- (long long)pickerViewCellInitialSelectedRow:(VSPSPickerTableViewCell *)arg1;
- (long long)pickerViewCellNumberOfRows:(VSPSPickerTableViewCell *)arg1;

@end
