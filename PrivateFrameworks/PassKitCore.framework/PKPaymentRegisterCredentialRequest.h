
@interface PKPaymentRegisterCredentialRequest : PKPaymentWebServiceRequest {
    PKAppletSubcredential * _credential;
    NSString * _credentialIdentifier;
    NSDictionary * _metadata;
}

@property (nonatomic, retain) PKAppletSubcredential *credential;

+ (id)requestMetadataFromCarKeyRegistrationMetadata:(id)arg1 withCredential:(id)arg2;
+ (id)requestMetadataFromRegistrationMetadata:(id)arg1 withCredential:(id)arg2;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (void)buildRequestBody:(id)arg1;
- (id)credential;
- (id)initWithCredential:(id)arg1 metadata:(id)arg2;
- (id)requestBody;
- (void)setCredential:(id)arg1;

@end
