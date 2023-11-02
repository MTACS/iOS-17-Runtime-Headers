
@interface WBSURLCompletionSessionProxy : NSObject {
    <WBSURLCompletionSessionProtocol> * _completionSession;
    NSObject<OS_dispatch_queue> * _completionSessionAccessQueue;
    WBSHistoryConnectionProxy * _historyConnectionProxy;
}

- (void).cxx_destruct;
- (void)_completionSessionWithCompletionHandler:(id /* block */)arg1;
- (void)getBestMatchesForTypedString:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 limit:(unsigned long long)arg3 forQueryID:(long long)arg4 withSearchParameters:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2;

@end
