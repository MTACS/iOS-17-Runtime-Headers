
@interface WBSForYouPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreference * _preference;
    WBSPerSitePreferencesSQLiteStore * _preferencesStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)allowedForYouRecommendationsFromRecommendations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)setPreferenceValue:(long long)arg1 forURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)valuesForPreference:(id)arg1;

@end
