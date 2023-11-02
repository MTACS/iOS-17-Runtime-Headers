
@protocol HFAccessorySettingAdapterButtonHandling <NSObject>

@required

- (NAFuture *)handleButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;
- (NAFuture *)inProgressButtonPressFutureForEntity:(HFAccessorySettingsEntity *)arg1;
- (NAFuture *)inProgressButtonPressFutureForKeyPath:(NSString *)arg1;
- (bool)supportButtonPressForEntity:(HFAccessorySettingsEntity *)arg1;

@end
