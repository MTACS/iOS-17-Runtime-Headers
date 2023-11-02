
@interface GTXPCDispatcher : NSObject <GTXPCDispatcher> {
    NSObject<OS_os_log> * _log;
    NSSet * _protocolMethods;
}

- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg1 replyConnection:(id)arg2;
- (id)initWithProtocolMethods:(id)arg1;

@end
