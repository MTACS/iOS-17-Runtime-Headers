
@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {
    SGDaemonConnection * _connection;
    <SGDSuggestManagerAllProtocol> * _inProcessSuggestManager;
    bool  _queuesRequestsIfBusy;
}

+ (id)_copyInvocationToHeapIfNeeded:(id)arg1;

- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 queuesRequestsIfBusy:(bool)arg2;
- (id)initWithInProcessSuggestManager:(id)arg1;

@end
