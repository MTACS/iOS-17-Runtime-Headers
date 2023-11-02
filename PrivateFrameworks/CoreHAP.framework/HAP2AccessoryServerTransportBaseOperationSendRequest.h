
@interface HAP2AccessoryServerTransportBaseOperationSendRequest : HAP2AccessoryServerTransportBaseOperation {
    id /* block */  _clientCompletion;
    HAP2AccessoryServerTransportRequest * _request;
    NSData * _response;
}

- (void).cxx_destruct;
- (id)initWithTransport:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)main;

@end
