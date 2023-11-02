
@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKAccountWebServiceCertificatesResponse * _certificatesResponse;
    PKPaymentDeviceMetadata * _deviceMetadata;
    PKAccountPaymentFundingSource * _fundingSource;
    NSString * _fundingSourceTermsIdentifier;
    NSString * _odiAssessment;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKAccountWebServiceCertificatesResponse *certificatesResponse;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic, retain) PKAccountPaymentFundingSource *fundingSource;
@property (nonatomic, retain) NSString *fundingSourceTermsIdentifier;
@property (nonatomic, copy) NSString *odiAssessment;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)certificatesResponse;
- (id)deviceMetadata;
- (id)fundingSource;
- (id)fundingSourceTermsIdentifier;
- (id)odiAssessment;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCertificatesResponse:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setFundingSource:(id)arg1;
- (void)setFundingSourceTermsIdentifier:(id)arg1;
- (void)setOdiAssessment:(id)arg1;

@end
