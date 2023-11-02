
@interface PKAccountWebServicePassDetailsRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKPaymentDeviceMetadata * _deviceMetadata;
    NSString * _sharingInstanceIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2;
- (id)accountIdentifier;
- (id)baseURL;
- (id)deviceMetadata;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (id)sharingInstanceIdentifier;

@end
