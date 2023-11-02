
@interface ATXSuggestedPagesGenreAppDataSource : NSObject <ATXSuggestedPagesAppDataSource>

- (bool)_appLaunchDataPassesThreshold:(id)arg1 forPageType:(long long)arg2 bundleId:(id)arg3;
- (bool)_pageType:(long long)arg1 matchesGenreId:(unsigned long long)arg2 forBundleId:(id)arg3;
- (id)provideAppsForSuggestedPageType:(long long)arg1 environment:(id)arg2;

@end
