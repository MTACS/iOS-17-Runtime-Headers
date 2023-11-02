
@interface GCSMouseProfilesCollection : NSObject <GCSMouseProfiles> {
    <GCSSettingsStoreService> * _settingsStore;
    <GCUserDefaults> * _userDefaults;
    NSArray * _values;
}

@property (nonatomic, readonly) <GCSSettingsStoreService> *settingsStore;
@property (nonatomic, copy) NSArray *values;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSettingsStore:(id)arg1 userDefaults:(id)arg2;
- (id)mouseProfileForBundleIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValues:(id)arg1;
- (id)settingsStore;
- (bool)storeVersionIsCompatible;
- (void)updateMouseProfiles:(id)arg1;
- (id)values;

@end
