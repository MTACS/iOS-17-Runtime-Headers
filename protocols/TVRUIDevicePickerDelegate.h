
@protocol TVRUIDevicePickerDelegate <NSObject>

@required

- (void)devicePicked:(id <TVRUIDevice>)arg1;
- (void)devicePickerWillChangeState:(bool)arg1 animated:(bool)arg2;
- (void)findButtonTappedForDevice:(id <TVRUIDevice>)arg1;

@end
