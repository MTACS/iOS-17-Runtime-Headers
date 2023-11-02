
@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSArray * _certificates;
    CNContact * _contact;
    PKPaymentDeviceMetadata * _deviceMetadata;
    NSString * _encryptionVersion;
    unsigned long long  _featureIdentifier;
    NSString * _odiAssessment;
    NSString * _ssn;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic, retain) NSString *encryptionVersion;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, copy) NSString *odiAssessment;
@property (nonatomic, retain) NSString *ssn;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)certificates;
- (id)contact;
- (id)deviceMetadata;
- (id)encryptionVersion;
- (unsigned long long)featureIdentifier;
- (id)odiAssessment;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setEncryptionVersion:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setOdiAssessment:(id)arg1;
- (void)setSsn:(id)arg1;
- (id)ssn;

@end
