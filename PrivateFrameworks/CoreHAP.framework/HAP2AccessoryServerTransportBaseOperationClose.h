
@interface HAP2AccessoryServerTransportBaseOperationClose : HAP2AccessoryServerTransportBaseOperation {
    id /* block */  _clientCompletion;
    NSError * _desiredError;
}

- (void).cxx_destruct;
- (id)initWithTransport:(id)arg1 desiredError:(id)arg2 completion:(id /* block */)arg3;
- (void)main;

@end
