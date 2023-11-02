
@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager

+ (id)sharedManager;

- (void)_didRemoveHostnames:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)dealloc;
- (id)initWithPerSitePreferencesStore:(id)arg1;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(id /* block */)arg4;

@end
