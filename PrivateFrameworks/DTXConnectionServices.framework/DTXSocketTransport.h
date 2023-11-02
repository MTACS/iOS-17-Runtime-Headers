
@interface DTXSocketTransport : DTXFileDescriptorTransport {
    NSArray * _addresses;
    int  _port;
    NSObject<OS_dispatch_semaphore> * _socketAcceptedSem;
    _Atomic int  _socketSemProtector;
}

@property (readonly) int port;

+ (id)addressForHost:(const char *)arg1 port:(int)arg2;
+ (id)schemes;

- (void).cxx_destruct;
- (void)_commonSocketTransportInit;
- (void)_setupChannelWithConnectedSocket:(int)arg1 assumingOwnership:(bool)arg2 orDisconnectBlock:(id /* block */)arg3;
- (void)_setupWithLocalPort:(int)arg1;
- (void)_signalSocketAccepted;
- (void)disconnect;
- (id)initWithConnectedSocket:(int)arg1 disconnectAction:(id /* block */)arg2;
- (id)initWithLocalPort:(int)arg1;
- (id)initWithRemoteAddress:(id)arg1;
- (id)localAddresses;
- (int)port;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2;

@end
