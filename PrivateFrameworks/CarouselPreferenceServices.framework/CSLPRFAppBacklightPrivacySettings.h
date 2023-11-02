
@interface CSLPRFAppBacklightPrivacySettings : NSObject <CSLPRFAppBacklightPrivacyProperties, CSLPRFPerApplicationSettings> {
    <CSLPRFApplication> * _application;
    unsigned long long  _category;
    <CSLPRFPerApplicationSettingsDelegate> * _delegate;
    bool  _isGlobalDefault;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_privacyDuringAlwaysOnForApp;
    bool  _lock_privacyDuringAlwaysOnForNotification;
    bool  _watchAppSupportsAlwaysOnDisplay;
}

@property (nonatomic, readonly) <CSLPRFApplication> *application;
@property (nonatomic, readonly) unsigned long long category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCustomSetting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isGlobalDefault;
@property (nonatomic, readonly) bool privacyDuringAlwaysOnForApp;
@property (nonatomic, readonly) bool privacyDuringAlwaysOnForNotification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool watchAppSupportsAlwaysOnDisplay;

+ (unsigned long long)categoryForApplication:(id)arg1;
+ (id)globalDefaultIdentifer;
+ (id)globalSettingsWithSerialization:(id)arg1 delegate:(id)arg2;
+ (const char *)notificationName;
+ (Class)serializationClass;
+ (id)settingsForApplication:(id)arg1 withSerialization:(id)arg2 delegate:(id)arg3;
+ (id)settingsKey;
+ (id)sharedSettingsModel;

- (void).cxx_destruct;
- (id)application;
- (unsigned long long)category;
- (id)description;
- (bool)hasCustomSetting;
- (unsigned long long)hash;
- (id)identifier;
- (id)initForApplication:(id)arg1 isGlobalDefault:(bool)arg2 withSerialization:(id)arg3 delegate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSettings:(id)arg1;
- (bool)isGlobalDefault;
- (bool)privacyDuringAlwaysOnForApp;
- (id)privacyDuringAlwaysOnForAppWithIgnoredSpecifier:(id)arg1;
- (bool)privacyDuringAlwaysOnForNotification;
- (id)privacyDuringAlwaysOnForNotificationWithIgnoredSpecifier:(id)arg1;
- (id)resolvedSettingWithGlobalSettings:(id)arg1;
- (id)serialize;
- (void)setPrivacyDuringAlwaysOnForApp:(id)arg1 withIgnoredSpecifier:(id)arg2;
- (void)setPrivacyDuringAlwaysOnForNotification:(id)arg1 withIgnoredSpecifier:(id)arg2;
- (void)updateSettingsWithBlock:(id /* block */)arg1;
- (bool)watchAppSupportsAlwaysOnDisplay;

@end
