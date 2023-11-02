
@interface WBSProfilePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
    WBSPerSitePreference * _profilePreference;
    <WBSProfileProviding> * _profileProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (nonatomic, readonly) WBSPerSitePreference *profilePreference;
@property (nonatomic, readonly) <WBSProfileProviding> *profileProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didRemoveProfileWithIdentifier:(id)arg1 hasMultipleProfiles:(bool)arg2;
- (void)getProfilePreferenceValueForDomain:(id)arg1 withTimeout:(double)arg2 fallbackValue:(id)arg3 usingBlock:(id /* block */)arg4;
- (bool)hasDynamicPreferenceValues;
- (id)identifierForProfilePreferenceForDomain:(id)arg1;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1 profileProvider:(id)arg2;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)perSitePreferencesStore;
- (bool)preferenceDoesNotHaveForOtherWebsitesDefault:(id)arg1;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (id)profilePreference;
- (id)profileProvider;
- (void)setProfilePreferenceValue:(id)arg1 forDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)shouldDeleteUnrecognizedPreference;
- (id)valuesForPreference:(id)arg1;

@end
