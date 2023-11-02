
@protocol PKNewDevicePasscodeViewControllerDelegate <NSObject>

@required

- (void)newDevicePasscodeViewController:(PKNewDevicePasscodeViewController *)arg1 didFinishSettingPasscode:(bool)arg2 withError:(NSError *)arg3;

@end
