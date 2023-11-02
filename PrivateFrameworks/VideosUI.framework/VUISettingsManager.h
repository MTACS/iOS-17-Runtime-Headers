
@interface VUISettingsManager : NSObject <MCProfileConnectionObserver> {
    NSNumber * _maxMovieRank;
    NSNumber * _maxTVShowRank;
    NSString * _preferredVideoFormat;
    WLKSettingsStore * _settingsStore;
    bool  _upNextLockupsUseCoverArt;
}

@property (getter=isAppInstallationAllowed, nonatomic, readonly) bool appInstallationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *maxMovieRank;
@property (nonatomic, copy) NSNumber *maxTVShowRank;
@property (nonatomic, copy) NSString *preferredVideoFormat;
@property (nonatomic, readonly) NSString *restrictions;
@property (nonatomic, retain) WLKSettingsStore *settingsStore;
@property (readonly) Class superclass;
@property (nonatomic) bool upNextLockupsUseCoverArt;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (bool)_hasPreferredVideoFormatChanged;
- (bool)_hasRestrictionsChanged;
- (bool)_hasUpNextLockupsUseCoverArtChanged;
- (id)_init;
- (unsigned long long)_preferredVideoFormat;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)arg1;
- (void)_setupNotificationObservers;
- (void)_teardownNotificationObservers;
- (bool)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (void)createSettingsStore;
- (void)dealloc;
- (id)init;
- (bool)isAppInstallationAllowed;
- (id)maxMovieRank;
- (id)maxTVShowRank;
- (id)preferencesJSONData;
- (id)preferredVideoFormat;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)restrictions;
- (void)setMaxMovieRank:(id)arg1;
- (void)setMaxTVShowRank:(id)arg1;
- (void)setPreferredVideoFormat:(id)arg1;
- (void)setSettingsStore:(id)arg1;
- (void)setUpNextLockupsUseCoverArt:(bool)arg1;
- (id)settingsStore;
- (bool)upNextLockupsUseCoverArt;

@end
