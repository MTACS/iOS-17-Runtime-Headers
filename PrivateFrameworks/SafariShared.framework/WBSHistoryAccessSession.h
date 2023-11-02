
@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol> {
    WBSHistoryService * _historyService;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithHistoryService:(id)arg1;

@end
