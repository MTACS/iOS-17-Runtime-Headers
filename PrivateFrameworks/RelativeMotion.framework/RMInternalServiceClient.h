
@interface RMInternalServiceClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    RMConnectionClient * _spiClient;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) RMConnectionClient *spiClient;

- (void).cxx_destruct;
- (void)disconnectAllClientsWithReply:(id /* block */)arg1;
- (void)disconnectClient:(id)arg1 withReply:(id /* block */)arg2;
- (void)getNumClientsWithReply:(id /* block */)arg1;
- (void)handleSpiIncomingMessage:(id)arg1 data:(id)arg2 replyBlock:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)listClientsWithReply:(id /* block */)arg1;
- (void)parseSpiErrorReply:(id)arg1 forMessage:(id)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setSpiClient:(id)arg1;
- (id)spiClient;

@end
