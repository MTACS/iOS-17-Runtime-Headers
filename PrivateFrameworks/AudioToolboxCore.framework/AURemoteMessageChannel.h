
@interface AURemoteMessageChannel : NSObject <AUAudioUnitMessageChannelProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    <AUMessageChannel> * _messageChannel;
    AURemoteMessageChannel * _selfRetained;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithMessageChannel:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)onCallRemoteAU:(id)arg1 reply:(id /* block */)arg2;
- (void)releaseChannel;
- (void)retainSelfIfRequired;

@end
