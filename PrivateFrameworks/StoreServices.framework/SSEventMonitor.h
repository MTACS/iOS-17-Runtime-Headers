
@interface SSEventMonitor : NSObject {
    <SSEventMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSXPCConnection * _eventConnection;
}

@property <SSEventMonitorDelegate> *delegate;

- (void)_connectEventConnection;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
