
@interface TabCompletionProvider : CompletionProvider <WBSBrowserTabCompletionProviderDelegate, WBSBrowserTabCompletionProviderSource> {
    WBSBrowserTabCompletionProvider * _browserTabCompletionProvider;
    <TabCompletionProviderDataSource> * _tabCompletionProviderDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <TabCompletionProviderDataSource> *tabCompletionProviderDataSource;

- (void).cxx_destruct;
- (id)bestTabCompletionMatchForQuery:(id)arg1 withTopHitURL:(id)arg2;
- (void)dealloc;
- (void)didFindMatchesForCurrentQueryInBrowserTabCompletionProvider:(id)arg1;
- (void)invalidateCachedTabData;
- (id)selectedTabInfoForBrowserTabCompletionProvider:(id)arg1;
- (void)setQueryToComplete:(id)arg1;
- (void)setTabCompletionProviderDataSource:(id)arg1;
- (id)tabCompletionProviderDataSource;
- (id)tabInfosForBrowserTabCompletionProvider:(id)arg1;

@end
