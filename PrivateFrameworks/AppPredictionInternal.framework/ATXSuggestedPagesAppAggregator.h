
@interface ATXSuggestedPagesAppAggregator : NSObject {
    NSArray * _sources;
    ATXSuggestedPagesTunableConstants * _suggestedPagesTunableConstants;
}

- (void).cxx_destruct;
- (id)_dockedApps;
- (long long)_sortApp1:(id)arg1 app2:(id)arg2 appLaunchCounts:(id)arg3;
- (id)_sortedApps:(id)arg1 sortedFirstPageApps:(id)arg2 appLaunchCounts:(id)arg3;
- (id)_sortedAppsOnFirstHomeScreenPage;
- (void)_validateApps:(id)arg1 pageType:(long long)arg2;
- (void)_validateApps:(id)arg1 withAppLaunchCounts:(id)arg2;
- (id)init;
- (id)initWithSources:(id)arg1;
- (id)provideAppsForSuggestedPageType:(long long)arg1 candidateApps:(id)arg2 environment:(id)arg3;

@end
