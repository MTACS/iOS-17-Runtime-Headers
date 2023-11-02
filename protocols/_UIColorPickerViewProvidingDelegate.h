
@protocol _UIColorPickerViewProvidingDelegate <NSObject>

@required

- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(UIColor *)arg1 colorSpace:(NSString *)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidShowEyedropper;

@end
