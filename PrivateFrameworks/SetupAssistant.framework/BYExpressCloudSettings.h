
@interface BYExpressCloudSettings : NSObject

+ (int)_appearanceValue;
+ (id)_displayZoomOption;
+ (id)_isFindMyEnabled;
+ (id)_isScreenTimeEnabled;
+ (id)createExpressSettingsWithQueue:(id)arg1;
+ (void)fetchSettingsWithCompletion:(id /* block */)arg1;
+ (id)privacyBundleForIdentifier:(id)arg1;
+ (void)updateSettings:(id)arg1 withCompletion:(id /* block */)arg2;

@end
