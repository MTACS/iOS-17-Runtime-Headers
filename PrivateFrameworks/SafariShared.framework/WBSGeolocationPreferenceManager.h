
@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate> {
    WBSPerSitePreference * _geolocationPreference;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WBSPerSitePreference *geolocationPreference;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isDateLessThanOneDayAgo:(id)arg1;
- (void)_removePermissionsPassingTest:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_setValue:(id)arg1 forDomain:(id)arg2 shouldIncludeTimestamp:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (id)geolocationPreference;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getGeolocationSettingForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)perSitePreferenceValueForGeolocationSetting:(long long)arg1;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)removeAllPermissions;
- (void)removeAllPermissionsWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllTemporaryPermissions;
- (void)removePermissionsAddedAfterDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTemporaryPermissionsAddedAfterDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultGeolocationSetting:(long long)arg1;
- (void)setDefaultGeolocationSetting:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setGeolocationSetting:(long long)arg1 forDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)valuesForPreference:(id)arg1;

@end
