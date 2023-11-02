
@interface NEAppProxyUDPFlow : NEAppProxyFlow {
    NWEndpoint * _localEndpoint;
}

@property (readonly) NWEndpoint *localEndpoint;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNEFlow:(struct _NEFlow { }*)arg1 queue:(id)arg2;
- (id)localEndpoint;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readDatagramsWithCompletionHandler:(id /* block */)arg1;
- (void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(id /* block */)arg3;

@end
