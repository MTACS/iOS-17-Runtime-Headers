
@protocol MFTimeZonePickerViewControllerDelegate <NSObject>

@required

- (void)timeZonePickerViewController:(MFTimeZonePickerViewController *)arg1 chooseTimeZone:(NSTimeZone *)arg2 cityName:(NSString *)arg3;

@end
