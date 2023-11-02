
@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionDataSource, WBSURLCompletionSessionProtocol> {
    WBSHistoryServiceDatabase * _database;
    WBSHistoryService * _historyService;
    NSObject<OS_dispatch_queue> * _internalQueue;
    WBSURLCompletionDatabase * _urlCompletionDatabase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_databaseConnectionOptions;
- (void)_ensureDatabaseIsWarmed;
- (void)_getBestMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 limit:(unsigned long long)arg3 forQueryID:(long long)arg4 withSearchParameters:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 options:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(bool)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 limit:(unsigned long long)arg3 forQueryID:(long long)arg4 withSearchParameters:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithHistoryService:(id)arg1;

@end
