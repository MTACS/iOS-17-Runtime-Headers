
@interface HCServer : NSObject {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    bool  _deadConnection;
    <AXHeardServerDelegate> * _delegate;
    <AXHeardServerMessageDelegate> * _messageDelegate;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) bool deadConnection;
@property (nonatomic) <AXHeardServerDelegate> *delegate;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic) <AXHeardServerMessageDelegate> *messageDelegate;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

- (void).cxx_destruct;
- (id)connectionQueue;
- (bool)deadConnection;
- (void)dealloc;
- (id)delegate;
- (void)handleMessageError:(id)arg1 destructive:(bool)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)handleReply:(id)arg1;
- (id)init;
- (bool)isConnected;
- (id)messageDelegate;
- (void)resetConnection;
- (void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (void)sendSynchronousMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (void)setConnectionQueue:(id)arg1;
- (void)setDeadConnection:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)setupServerIfNecessary;
- (void)shouldRestartOnInterruption:(id /* block */)arg1;
- (void)startServerAndBoostPriority;
- (void)startServerWithDelegate:(id)arg1;
- (void)terminateConnectionAndNotify:(bool)arg1;
- (id)xpcConnection;

@end
