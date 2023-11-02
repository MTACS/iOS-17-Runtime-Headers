
@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    WiFiAwareSubscribeConfiguration * _configuration;
    <WiFiAwareSubscriberDelegate> * _delegate;
    NSNumber * _subscribeID;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) WiFiAwareSubscribeConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WiFiAwareSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)description;
- (id)exportedInterface;
- (id)exportedObject;
- (void)handleError:(long long)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)remoteObjectInterface;
- (void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (void)subscribeFailedToStartWithError:(long long)arg1;
- (void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2;
- (void)subscribeReceivedDiscoveryResult:(id)arg1;
- (void)subscribeReceivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)subscribeStartedWithInstanceID:(unsigned char)arg1;
- (void)subscribeTerminatedWithReason:(long long)arg1;

@end
