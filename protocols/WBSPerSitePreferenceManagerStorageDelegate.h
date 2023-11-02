
@protocol WBSPerSitePreferenceManagerStorageDelegate <NSObject>

@required

- (WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
- (NSString *)preferenceNameForPreference:(WBSPerSitePreference *)arg1;

@end
