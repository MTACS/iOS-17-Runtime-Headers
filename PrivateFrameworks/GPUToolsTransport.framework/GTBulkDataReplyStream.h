
@interface GTBulkDataReplyStream : NSObject <GTXPCDispatcher> {
    id /* block */  _callback;
    unsigned long long  dispatcherId;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg1 replyConnection:(id)arg2;
- (unsigned long long)dispatcherId;
- (id)initWithCallback:(id /* block */)arg1;
- (void)setDispatcherId:(unsigned long long)arg1;

@end
