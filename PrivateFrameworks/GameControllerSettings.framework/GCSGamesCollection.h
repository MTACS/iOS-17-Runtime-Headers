
@interface GCSGamesCollection : NSObject <GCSGames> {
    GCSGame * _defaultGame;
    <GCSSettingsStoreService> * _settingsStore;
    <GCUserDefaults> * _userDefaults;
    NSArray * _values;
}

@property (nonatomic, readonly) <GCSSettingsStoreService> *settingsStore;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (void)dealloc;
- (id)gameWithBundleIdentifier:(id)arg1;
- (id)initWithSettingsStore:(id)arg1 userDefaults:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setValues:(id)arg1;
- (id)settingsStore;
- (bool)storeVersionIsCompatible;
- (void)updateGames:(id)arg1;
- (id)values;

@end
