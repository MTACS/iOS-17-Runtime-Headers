
@interface WBSLockdownModePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceBinaryToggleItemManager, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreference * _lockdownPreference;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferenceStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreference *lockdownPreference;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getLockdownModeEnabledForDomain:(id)arg1 withTimeout:(double)arg2 fallbackEnabledState:(bool)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithPerSitePreferenceStore:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)lockdownPreference;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)perSitePreferencesStore;
- (bool)preferenceDoesNotHaveForOtherWebsitesDefault:(id)arg1;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)setLockdownModeEnabled:(bool)arg1 forDomain:(id)arg2;
- (id)valuesForPreference:(id)arg1;

@end
