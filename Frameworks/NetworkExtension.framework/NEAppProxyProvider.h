
@interface NEAppProxyProvider : NETunnelProvider

@property (nonatomic) unsigned long long maxWriteSize;

- (void)cancelProxyWithError:(id)arg1;
- (bool)handleNewFlow:(id)arg1;
- (bool)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2;
- (unsigned long long)maxWriteSize;
- (void)setMaxWriteSize:(unsigned long long)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
