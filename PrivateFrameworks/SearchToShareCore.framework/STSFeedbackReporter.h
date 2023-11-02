
@interface STSFeedbackReporter : NSObject {
    PARSession * _parsecSession;
}

@property (nonatomic, retain) PARSession *parsecSession;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)didClearRecents;
- (void)didClearSearchBarInput;
- (void)didEndNetworkRequest:(id)arg1 infoDict:(id)arg2;
- (void)didEngageCategoryResult:(id)arg1 suggestion:(id)arg2;
- (void)didEngageProviderLogo;
- (void)didEngageResult:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didLoadCategoryResults:(id)arg1 recents:(id)arg2 queryId:(unsigned long long)arg3;
- (void)didLoadResults:(id)arg1 indexPaths:(id)arg2 queryId:(unsigned long long)arg3;
- (void)didPreviewResult:(id)arg1 peek:(bool)arg2;
- (void)didPreviewResultLongPress:(id)arg1;
- (void)didReportConcern:(id)arg1 punchout:(id)arg2;
- (void)didSearchWithCustomQuery:(id)arg1;
- (void)didSearchWithSuggestedQuery:(id)arg1;
- (void)didShowProactiveCategories:(id)arg1 conversationId:(id)arg2;
- (void)didShowProactiveSuggestions:(id)arg1 conversationId:(id)arg2;
- (void)didShowQuerySuggestions:(id)arg1 queryId:(unsigned long long)arg2;
- (void)didShowResults:(id)arg1 scrolling:(bool)arg2;
- (void)didShowResults:(id)arg1 trigger:(unsigned long long)arg2;
- (id)didStartNetworkRequest:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
- (id)parsecSession;
- (void)resourceDidLoad:(id)arg1;
- (void)searchBarDidCancel;
- (void)searchViewDidAppearWithEvent:(unsigned long long)arg1;
- (void)searchViewDidDisappear;
- (void)setParsecSession:(id)arg1;

@end
