
@interface AMSSigningSecurityService : NSObject {
    <AMSDServiceBrokerProtocol> * _serviceBroker;
}

@property (nonatomic, readonly) <AMSDServiceBrokerProtocol> *serviceBroker;

- (void).cxx_destruct;
- (id)_defaultSecurityServiceWithDelegate:(id)arg1;
- (id)_handleResponse:(id)arg1 bag:(id)arg2 securityServicePromise:(id)arg3 onDenied:(id /* block */)arg4;
- (void)_handleSecurityServicePromise:(id)arg1 onConnected:(id /* block */)arg2 onDenied:(id /* block */)arg3 onError:(id /* block */)arg4;
- (id)_headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 securityServicePromise:(id)arg4 onDenied:(id /* block */)arg5;
- (id)handleResponse:(id)arg1 bag:(id)arg2;
- (id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3;
- (id)init;
- (id)initWithServiceBroker:(id)arg1;
- (id)serviceBroker;
- (id)signatureForRequest:(id)arg1;

@end
