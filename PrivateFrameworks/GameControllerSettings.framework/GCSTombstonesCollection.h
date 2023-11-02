
@interface GCSTombstonesCollection : NSObject <GCSTombstones> {
    <GCSSettingsStoreService> * _settingsStore;
    <GCUserDefaults> * _userDefaults;
    NSArray * _values;
}

@property (nonatomic, readonly) <GCSSettingsStoreService> *settingsStore;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSettingsStore:(id)arg1 userDefaults:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValues:(id)arg1;
- (id)settingsStore;
- (bool)storeVersionIsCompatible;
- (id)tombstoneForIdentifier:(id)arg1;
- (void)updateTombstones:(id)arg1;
- (id)values;

@end
