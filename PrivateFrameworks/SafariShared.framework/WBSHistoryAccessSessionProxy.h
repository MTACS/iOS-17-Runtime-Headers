
@interface WBSHistoryAccessSessionProxy : NSObject {
    <WBSHistoryAccessSessionProtocol> * _historyAccessSession;
    NSObject<OS_dispatch_queue> * _historyAccessSessionAccessQueue;
    WBSHistoryConnectionProxy * _historyConnectionProxy;
}

- (void).cxx_destruct;
- (void)_getHistoryAccessSessionWithCompletionHandler:(id /* block */)arg1;
- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;

@end
