
@interface WBSPasswordBreachHelper : NSObject <WBSPasswordBreachHelperProtocol>

- (void)addResultRecordDictionaries:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)arg1;
- (void)runLookupSessionIgnoringMinimumDelay:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
