
@protocol CNCountryPickerControllerDelegate <UINavigationControllerDelegate>

@required

- (void)countryPicker:(CNCountryPickerController *)arg1 didPickCountryCode:(NSString *)arg2;
- (void)countryPickerDidCancel:(CNCountryPickerController *)arg1;

@end
