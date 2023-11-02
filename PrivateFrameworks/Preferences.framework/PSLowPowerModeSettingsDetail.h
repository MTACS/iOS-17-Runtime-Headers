
@interface PSLowPowerModeSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)iconImage;
+ (bool)isEnabled;
+ (id)preferencesURL;
+ (void)setEnabled:(bool)arg1;

@end
