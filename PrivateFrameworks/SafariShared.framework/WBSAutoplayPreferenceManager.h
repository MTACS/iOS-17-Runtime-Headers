
@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreference * _autoplayPreference;
    WBSDomainAllowListManager * _domainAllowListManager;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
}

@property (nonatomic, readonly) WBSPerSitePreference *autoplayPreference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autoplayPreference;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getAutoplayPreferenceValueForDomain:(id)arg1 withTimeout:(double)arg2 fallbackValue:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1 allowListManager:(id)arg2;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)prepareForTermination;
- (void)setAutoplayPreferenceValue:(long long)arg1 forURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)valuesForPreference:(id)arg1;

@end
