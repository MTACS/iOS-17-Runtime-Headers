
@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _applicationTermsIdentifier;
    NSURL * _baseURL;
    PKPaymentDeviceMetadata * _deviceMetadata;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    NSString * _odiAssessment;
    NSString * _offerTermsIdentifier;
    NSString * _pathIdentifier;
    NSString * _pathTermsIdentifier;
    bool  _termsAccepted;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationTermsIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic, copy) NSString *odiAssessment;
@property (nonatomic, copy) NSString *offerTermsIdentifier;
@property (nonatomic, copy) NSString *pathIdentifier;
@property (nonatomic, copy) NSString *pathTermsIdentifier;
@property (nonatomic) bool termsAccepted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)applicationIdentifier;
- (id)applicationTermsIdentifier;
- (id)baseURL;
- (id)deviceMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installmentConfiguration;
- (id)odiAssessment;
- (id)offerTermsIdentifier;
- (id)pathIdentifier;
- (id)pathTermsIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationTermsIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setInstallmentConfiguration:(id)arg1;
- (void)setOdiAssessment:(id)arg1;
- (void)setOfferTermsIdentifier:(id)arg1;
- (void)setPathIdentifier:(id)arg1;
- (void)setPathTermsIdentifier:(id)arg1;
- (void)setTermsAccepted:(bool)arg1;
- (bool)termsAccepted;

@end
