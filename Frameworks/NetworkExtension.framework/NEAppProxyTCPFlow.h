
@interface NEAppProxyTCPFlow : NEAppProxyFlow {
    NWEndpoint * _remoteEndpoint;
}

@property (readonly) NWEndpoint *remoteEndpoint;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNEFlow:(struct _NEFlow { }*)arg1 queue:(id)arg2;
- (void)readDataWithCompletionHandler:(id /* block */)arg1;
- (id)remoteEndpoint;
- (void)writeData:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
