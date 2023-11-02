
@protocol HUPickerCellDelegate <NSObject>

@required

- (long long)numberOfValuesForPickerViewCell:(HUPickerViewCell *)arg1;
- (void)pickerViewCell:(HUPickerViewCell *)arg1 didSelectValueAtIndex:(long long)arg2;

@optional

- (NSAttributedString *)pickerViewCell:(HUPickerViewCell *)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (bool)pickerViewCell:(HUPickerViewCell *)arg1 canSelectValueAtIndex:(long long)arg2;
- (NSString *)pickerViewCell:(HUPickerViewCell *)arg1 titleForValueAtIndex:(long long)arg2;

@end
