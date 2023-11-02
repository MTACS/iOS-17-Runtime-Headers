
@interface PKAuxiliaryCapabilityWebServiceRequest : PKPaymentWebServiceRequest {
    PKPaymentPass * _pass;
}

@property (nonatomic, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)pass;
- (void)setPass:(id)arg1;

@end
