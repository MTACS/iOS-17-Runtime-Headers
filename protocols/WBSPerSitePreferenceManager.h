
@protocol WBSPerSitePreferenceManager <NSObject>

@required

- (<WBSPerSitePreferenceManagerDelegate> *)delegate;
- (void)getAllDomainsConfiguredForPreference:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getDefaultPreferenceValueForPreference:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)getValueOfPreference:(void *)arg1 forDomain:(void *)arg2 withTimeout:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: WBSPerSitePreference *, NSString *, WBSPerSitePreferenceTimeout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, bool, void*
- (NSString *)localizedStringForValue:(id)arg1 inPreference:(WBSPerSitePreference *)arg2;
- (NSArray *)preferences;
- (void)removePreferenceValuesForDomains:(void *)arg1 fromPreference:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSSet *, WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDefaultValue:(void *)arg1 ofPreference:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: id, WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDelegate:(id <WBSPerSitePreferenceManagerDelegate>)arg1;
- (void)setValue:(void *)arg1 ofPreference:(void *)arg2 forDomain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: id, WBSPerSitePreference *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)valuesForPreference:(WBSPerSitePreference *)arg1;

@optional

- (void)getDomainsAllowedToRemoveForPreference:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: WBSPerSitePreference *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (bool)hasDynamicPreferenceValues;
- (NSString *)localizedWarningTextForPreference:(WBSPerSitePreference *)arg1;
- (bool)preferenceAppliesToHighLevelDomains:(WBSPerSitePreference *)arg1;
- (bool)preferenceDoesNotHaveForOtherWebsitesDefault:(WBSPerSitePreference *)arg1;
- (bool)preferenceOnlyShowsConfiguredSites:(WBSPerSitePreference *)arg1;
- (bool)preferenceShowsTabsInPrivateBrowsing:(WBSPerSitePreference *)arg1;
- (bool)shouldDeleteUnrecognizedPreference;

@end
