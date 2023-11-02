
@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {
    NSDictionary * _configuration;
    NSProxyConnection * _inbound;
    NSString * _outHost;
    int  _outPort;
    NSProxyConnection * _outbound;
    NSObject<OS_dispatch_queue> * _queue;
    __CFN_SocksHandshake * _socksHandshake;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3;

- (void).cxx_destruct;
- (void)cleanup;
- (void)connected:(int)arg1;
- (void)dealloc;
- (void)outboundConnectionCompleteWithError:(int)arg1;
- (void)outboundConnectionReceivedData:(id)arg1 handler:(id /* block */)arg2;

@end
