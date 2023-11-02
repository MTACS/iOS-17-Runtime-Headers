
@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceBinaryToggleItemManager, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    bool  _clientPrefersMobileUserAgentByDefault;
    NSMutableSet * _observers;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
    _SFRequestDesktopSiteQuirksManager * _quirksManager;
    WBSPerSitePreference * _requestDesktopSitePreference;
}

@property (nonatomic) bool clientPrefersMobileUserAgentByDefault;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (nonatomic, readonly) WBSPerSitePreference *requestDesktopSitePreference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_defaultPreferenceValue;
- (void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
- (void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
- (void)_requestDesktopSitePerSitePreferenceDidChange:(id)arg1;
- (void)addRequestDesktopSitePerSitePreferenceObserver:(id)arg1;
- (bool)clientPrefersMobileUserAgentByDefault;
- (void)dealloc;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getAllRequestDesktopSitePerSitePreferenceValues:(id /* block */)arg1;
- (void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg1 domain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getRequestDesktopSitePreferenceForDomain:(id)arg1 withTimeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)init;
- (id)initWithPerSitePreferencesStore:(id)arg1 quirksManager:(id)arg2;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)offValueForPreference:(id)arg1;
- (id)onValueForPreference:(id)arg1;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)removeRequestDesktopSitePerSitePreferenceObserver:(id)arg1;
- (id)requestDesktopSitePreference;
- (void)setClientPrefersMobileUserAgentByDefault:(bool)arg1;
- (id)valuesForPreference:(id)arg1;

@end
