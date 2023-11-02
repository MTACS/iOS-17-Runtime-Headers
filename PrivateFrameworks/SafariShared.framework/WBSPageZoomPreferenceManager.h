
@interface WBSPageZoomPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPageZoomPreferenceManager * _fallbackPreferenceManager;
    WBSPerSitePreference * _pageZoomPreference;
    WBSPerSitePreferencesSQLiteStore * _perSitePreferencesStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WBSPageZoomPreferenceManager *fallbackPreferenceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPerSitePreference *pageZoomPreference;
@property (nonatomic, readonly) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;

+ (id)pageZoomFactors;

- (void).cxx_destruct;
- (bool)_canChangePageZoom:(bool)arg1 fromStep:(long long)arg2;
- (void)_getDefaultZoomStep:(id /* block */)arg1;
- (void)_getZoomStepForDomain:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_incrementOrDecreaseZoomStep:(bool)arg1 forURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)_pageZoomStepToZoomFactor:(long long)arg1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (id)fallbackPreferenceManager;
- (void)getAvailableActionsForURL:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getPageZoomFactorForURL:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)pageZoomPreference;
- (id)perSitePreferencesStore;
- (id)preferenceNameForPreference:(id)arg1;
- (id)preferences;
- (void)removeAllPageZoomPreferences;
- (void)removePageZoomPreferencesForHostnames:(id)arg1;
- (void)resetZoomLevelOnURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setFallbackPreferenceManager:(id)arg1;
- (id)valuesForPreference:(id)arg1;
- (void)zoomInOnURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)zoomOutOnURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
