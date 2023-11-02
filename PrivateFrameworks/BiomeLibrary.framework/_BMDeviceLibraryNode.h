
@interface _BMDeviceLibraryNode : _BMLibraryNode

+ (id)Audio;
+ (id)BootSession;
+ (id)Charging;
+ (id)Display;
+ (id)KeybagLocked;
+ (id)Metadata;
+ (id)Networking;
+ (id)Power;
+ (id)ScreenLocked;
+ (id)Settings;
+ (id)SilentMode;
+ (id)Thermals;
+ (id)TimeZone;
+ (id)Wireless;
+ (id)configurationForBootSession;
+ (id)configurationForKeybagLocked;
+ (id)configurationForMetadata;
+ (id)configurationForScreenLocked;
+ (id)configurationForSilentMode;
+ (id)configurationForTimeZone;
+ (id)identifier;
+ (id)storeConfigurationForBootSession;
+ (id)storeConfigurationForKeybagLocked;
+ (id)storeConfigurationForMetadata;
+ (id)storeConfigurationForScreenLocked;
+ (id)storeConfigurationForSilentMode;
+ (id)storeConfigurationForTimeZone;
+ (id)streamNames;
+ (id)streamWithName:(id)arg1;
+ (id)sublibraries;
+ (id)syncPolicyForBootSession;
+ (id)syncPolicyForKeybagLocked;
+ (id)syncPolicyForMetadata;
+ (id)syncPolicyForScreenLocked;
+ (id)syncPolicyForSilentMode;
+ (id)syncPolicyForTimeZone;
+ (id)validKeyPaths;

@end
