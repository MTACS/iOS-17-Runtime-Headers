
@protocol CloudSettingsServiceProtocol

@required

- (void)applyCloudSettingsToDevice:(NSArray *)arg1 forStore:(NSString *)arg2;
- (void)writeToCloudSettings:(NSArray *)arg1 forStore:(NSString *)arg2;

@optional

- (void)applySettingsToDevice:(NSDictionary *)arg1;
- (NSDictionary *)deviceSettings;
- (void)performFirstTimeSetupForStore:(NSString *)arg1;
- (void)performFirstTimeSetupForStore:(NSString *)arg1 newDevice:(bool)arg2;

@end
