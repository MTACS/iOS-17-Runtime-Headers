
@interface WBSBrowserTabCompletionProvider : NSObject {
    NSString * _currentQuery;
    NSArray * _currentTabCompletionMatches;
    <WBSBrowserTabCompletionProviderSource> * _dataSource;
    <WBSBrowserTabCompletionProviderDelegate> * _delegate;
    NSOperationQueue * _queue;
    WBSBrowserTabCompletionInfo * _selectedTabInfo;
    NSArray * _tabInfos;
}

@property (nonatomic, readonly, copy) NSString *currentQuery;
@property (nonatomic, readonly, copy) NSArray *currentTabCompletionMatches;
@property (nonatomic) <WBSBrowserTabCompletionProviderSource> *dataSource;
@property (nonatomic) <WBSBrowserTabCompletionProviderDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *tabInfos;

- (void).cxx_destruct;
- (long long)_compareTabMatch:(id)arg1 otherTabMatch:(id)arg2;
- (unsigned long long)_distanceFromSelectedTabForTabMatch:(id)arg1;
- (bool)_isOperationValidForQuery:(id)arg1 tabInfos:(id)arg2 selectedTabInfo:(id)arg3;
- (id)_matchesForQuery:(id)arg1 tabInfos:(id)arg2 selectedTabInfo:(id)arg3 forQueryID:(long long)arg4;
- (void)_prepareQueue;
- (id)bestTabCompletionMatchFromMatches:(id)arg1 withTopHitURL:(id)arg2;
- (id)bestTabCompletionMatchWithTopHitURL:(id)arg1;
- (id)currentQuery;
- (id)currentTabCompletionMatches;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (id)selectedTabInfo;
- (void)setCurrentQuery:(id)arg1 forQueryID:(long long)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tabCompletionMatchesForQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)tabInfos;

@end
