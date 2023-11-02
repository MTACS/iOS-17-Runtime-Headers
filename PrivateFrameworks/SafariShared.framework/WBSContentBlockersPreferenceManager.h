
@interface WBSContentBlockersPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceBinaryToggleItemManager, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreference * _contentBlockersPreference;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
}

@property (nonatomic, readonly) WBSPerSitePreference *contentBlockersPreference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentBlockersPreference;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getContentBlockersEnabledStateForDomain:(id)arg1 withTimeout:(double)arg2 fallbackEnabledState:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (id)valuesForPreference:(id)arg1;

@end
