
@interface GTReplayADSReplyStream : NSObject <GTXPCDispatcher> {
    GTBulkDataServiceXPCProxy * _bulkDataProxy;
    id /* block */  _callback;
    NSObject<OS_os_log> * _log;
    GTReplayRequestToken * _token;
    unsigned long long  dispatcherId;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg1 replyConnection:(id)arg2;
- (unsigned long long)dispatcherId;
- (id)initWithCallback:(id /* block */)arg1 bulkDataProxy:(id)arg2 andToken:(id)arg3;
- (void)setDispatcherId:(unsigned long long)arg1;

@end
