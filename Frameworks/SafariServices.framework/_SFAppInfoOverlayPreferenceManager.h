
@interface _SFAppInfoOverlayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceBinaryToggleItemManager, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreference * _appInfoOverlayPreference;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
}

@property (nonatomic, readonly) WBSPerSitePreference *appInfoOverlayPreference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_defaultPreferenceValue;
- (id)appInfoOverlayPreference;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)getAppInfoOverlayPreferenceForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)setAppInfoOverlayPreferenceForDomain:(id)arg1 settings:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)valuesForPreference:(id)arg1;

@end
