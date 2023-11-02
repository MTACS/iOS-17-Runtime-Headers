
@protocol CSLPRFPerApplicationSettings <NSObject>

@required

+ (NSString *)globalDefaultIdentifer;
+ (<CSLPRFPerApplicationSettings> *)globalSettingsWithSerialization:(id <NSObject>)arg1 delegate:(id <CSLPRFPerApplicationSettingsDelegate>)arg2;
+ (const char *)notificationName;
+ (Class)serializationClass;
+ (<CSLPRFPerApplicationSettings> *)settingsForApplication:(id <CSLPRFApplication>)arg1 withSerialization:(id <NSObject>)arg2 delegate:(id <CSLPRFPerApplicationSettingsDelegate>)arg3;
+ (NSString *)settingsKey;

- (<CSLPRFApplication> *)application;
- (bool)hasCustomSetting;
- (NSString *)identifier;
- (bool)isGlobalDefault;
- (id)resolvedSettingWithGlobalSettings:(id <CSLPRFPerApplicationSettings>)arg1;
- (<NSObject> *)serialize;
- (void)updateSettingsWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

@end
