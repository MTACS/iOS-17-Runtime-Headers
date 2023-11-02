
@interface SASProximitySession : NSObject {
    NSObject<OS_dispatch_queue> * _actionQueue;
    bool  _connected;
    <SASProximitySessionDelegate> * _delegate;
    SASProximitySessionTransport * _transport;
}

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (getter=isConnected) bool connected;
@property <SASProximitySessionDelegate> *delegate;
@property (retain) CUMessageSession *sharingMessageSession;
@property (retain) SASProximitySessionTransport *transport;

- (void).cxx_destruct;
- (id)actionFromData:(id)arg1;
- (id)actionQueue;
- (void)activate;
- (id)delegate;
- (void)handleAction:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)isConnected;
- (void)receivedAction:(id)arg1 response:(id /* block */)arg2;
- (id)sendAction:(id)arg1;
- (void)setActionQueue:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSharingMessageSession:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)sharingMessageSession;
- (id)transport;

@end
