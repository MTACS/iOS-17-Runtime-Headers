
@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>

@required

- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(WBSPerSitePreference *)arg1;
- (WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
- (NSString *)preferenceNameForPreference:(WBSPerSitePreference *)arg1;

@optional

- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(void *)arg1 domain:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WBSPerSitePreference *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*

@end
