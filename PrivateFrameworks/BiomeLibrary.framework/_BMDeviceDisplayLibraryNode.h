
@interface _BMDeviceDisplayLibraryNode : _BMLibraryNode

+ (id)AlwaysOn;
+ (id)Appearance;
+ (id)Backlight;
+ (id)InterfaceOrientation;
+ (id)NightShift;
+ (id)TrueTone;
+ (id)configurationForAlwaysOn;
+ (id)configurationForAppearance;
+ (id)configurationForBacklight;
+ (id)configurationForInterfaceOrientation;
+ (id)configurationForNightShift;
+ (id)configurationForTrueTone;
+ (id)identifier;
+ (id)storeConfigurationForAlwaysOn;
+ (id)storeConfigurationForAppearance;
+ (id)storeConfigurationForBacklight;
+ (id)storeConfigurationForInterfaceOrientation;
+ (id)storeConfigurationForNightShift;
+ (id)storeConfigurationForTrueTone;
+ (id)streamNames;
+ (id)streamWithName:(id)arg1;
+ (id)sublibraries;
+ (id)syncPolicyForAlwaysOn;
+ (id)syncPolicyForAppearance;
+ (id)syncPolicyForBacklight;
+ (id)syncPolicyForInterfaceOrientation;
+ (id)syncPolicyForNightShift;
+ (id)syncPolicyForTrueTone;
+ (id)validKeyPaths;

@end
