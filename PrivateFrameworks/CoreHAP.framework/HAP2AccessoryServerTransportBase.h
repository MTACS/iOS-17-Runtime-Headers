
@interface HAP2AccessoryServerTransportBase : HAP2LoggingObject <HAP2AccessoryServerTransportCommon> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    unsigned long long  _internalState;
    double  _maxRequestTimeout;
    HAP2SerializedOperationQueue * _operationQueue;
    HAP2PropertyLock * _propertyLock;
    HAP2AccessoryServerTransportBaseOperationClose * _queuedCloseOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxRequestTimeout;
@property (nonatomic, readonly) HAP2SerializedOperationQueue *operationQueue;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerTransportCommon> *underlyingTransport;

+ (id)new;

- (void).cxx_destruct;
- (void)closeWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)delegateQueue;
- (void)didChangeStateWithError:(id)arg1;
- (void)didDisconnectWithError:(id)arg1;
- (void)doCloseWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doOpenWithCompletion:(id /* block */)arg1;
- (void)doSendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)doUpdateMaxRequestTimeout:(double)arg1;
- (id)endpointForCharacteristic:(id)arg1;
- (id)endpointForCharacteristics:(id)arg1;
- (id)init;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2;
- (double)maxRequestTimeout;
- (bool)mergeWithNewTransport:(id)arg1;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (void)openWithCompletion:(id /* block */)arg1;
- (id)operationQueue;
- (id)propertyLock;
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;
- (void)sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setMaxRequestTimeout:(double)arg1;
- (unsigned long long)state;
- (id)underlyingTransport;
- (void)updateMaxRequestTimeout:(double)arg1;
- (id)wellKnownEndpoint:(unsigned long long)arg1;

@end
