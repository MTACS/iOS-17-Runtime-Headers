
@interface WLDeviceDiscoverySocketHandler : WLSocketHandler {
    <WLDeviceDiscoverySocketHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _readSource;
    int  _sockfd;
    WLSourceDevice * _sourceDevice;
    NSString * _srpPassword;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic) <WLDeviceDiscoverySocketHandlerDelegate> *delegate;
@property (nonatomic, readonly) int sockfd;

- (void).cxx_destruct;
- (id)_commandStringWithData:(id)arg1;
- (bool)_didReceiveHandshakeData:(id)arg1;
- (id)_handshakeCommandData;
- (id)_handshakeResponseData;
- (id)_okResponseData;
- (void)_performSRPAuthenticationAndHandshake;
- (void)close;
- (id)delegate;
- (id)initWithSocket:(int)arg1 srpPassword:(id)arg2 delegate:(id)arg3;
- (void)invalidateWithError:(id)arg1;
- (void)resume;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (int)sockfd;
- (void)suspend;

@end
