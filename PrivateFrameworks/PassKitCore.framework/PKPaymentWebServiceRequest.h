
@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest {
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (nonatomic, retain) <PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 appleAccountInformation:(id)arg5;
- (id)_murlRequestWithURL:(id)arg1;
- (void)_signRequest:(id)arg1 webService:(id)arg2 completion:(id /* block */)arg3;
- (void)_signRequestData:(id)arg1 forRequest:(id)arg2 webService:(id)arg3 completion:(id /* block */)arg4;
- (void)setTargetDevice:(id)arg1;
- (id)targetDevice;

@end