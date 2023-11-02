
@interface HAP2AccessoryServerSecureTransportBase : HAP2AccessoryServerTransportBase <HAP2AccessoryServerSecureTransport, HAP2AccessoryServerTransportDelegate> {
    <HAP2AccessoryServerSecureTransportDelegate> * _delegate;
    <HAPEncryptedSession> * _encryptedSession;
    <HAP2AccessoryServerTransport> * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryServerSecureTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HAPEncryptedSession> *encryptedSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxRequestTimeout;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerTransport> *transport;
@property (nonatomic, readonly) <HAP2AccessoryServerTransportCommon> *underlyingTransport;

+ (id)defaultEncryptedSession;

- (void).cxx_destruct;
- (void)_decryptResponse:(id)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)_encryptRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)decryptData:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (id)delegate;
- (void)didChangeStateWithError:(id)arg1;
- (void)doCloseWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doOpenWithCompletion:(id /* block */)arg1;
- (void)doSendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)doUpdateMaxRequestTimeout:(double)arg1;
- (id)encryptData:(id)arg1 error:(id*)arg2;
- (id)encryptedSession;
- (id)endpointForCharacteristic:(id)arg1;
- (id)endpointForCharacteristics:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 transport:(id)arg3;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 transport:(id)arg3 encryptedSession:(id)arg4;
- (bool)mergeWithNewTransport:(id)arg1;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptedSession:(id)arg1;
- (id)transport;
- (void)transport:(id)arg1 didChangeState:(unsigned long long)arg2 error:(id)arg3;
- (void)transport:(id)arg1 didReceiveEvent:(id)arg2;
- (id)underlyingTransport;
- (id)wellKnownEndpoint:(unsigned long long)arg1;

@end
