
@interface AXAuditDeviceSettingsManager : NSObject {
    NSArray * __cachedSettings;
    NSArray * _defaultSettings;
    <AXAuditDeviceSettingsManagerDelegate> * _delegate;
    bool  _deviceSettingsCanBeRestored;
    long long  _hostAPIVersion;
    NSArray * _settings;
}

@property (nonatomic, retain) NSArray *_cachedSettings;
@property (nonatomic, retain) NSArray *defaultSettings;
@property (nonatomic) <AXAuditDeviceSettingsManagerDelegate> *delegate;
@property (nonatomic) bool deviceSettingsCanBeRestored;
@property long long hostAPIVersion;
@property (nonatomic, retain) NSArray *settings;

- (void).cxx_destruct;
- (id)_cachedSettings;
- (void)cacheDeviceSettingsValues;
- (void)dealloc;
- (id)defaultSettings;
- (id)delegate;
- (bool)deviceSettingsCanBeRestored;
- (long long)hostAPIVersion;
- (id)init;
- (void)resetToDefaultAccessibilitySettings;
- (void)restoreDeviceSettingsValues;
- (void)setDefaultSettings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceSettingsCanBeRestored:(bool)arg1;
- (void)setHostAPIVersion:(long long)arg1;
- (void)setSettings:(id)arg1;
- (void)set_cachedSettings:(id)arg1;
- (id)settingForIdentifier:(id)arg1;
- (id)settings;
- (id)settingsToCache;
- (void)startObservingChanges;
- (void)stopObservingChanges;
- (void)updateCurrentValueForAllSettingsAndPostNotificationIfChanged:(bool)arg1;
- (void)updateSetting:(id)arg1 withNumberValue:(id)arg2;

@end
