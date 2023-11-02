
@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse {
    NSArray * _acceptableDocuments;
    PKPeerPaymentAccount * _account;
    bool  _complete;
    NSArray * _encryptionCertificates;
    NSString * _encryptionVersion;
    PKDynamicProvisioningPageLearnMoreContent * _learnMore;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSArray * _requiredFieldsByPage;
    NSString * _subtitle;
    NSString * _title;
    long long  _verificationContext;
}

@property (nonatomic, readonly) NSArray *acceptableDocuments;
@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) bool complete;
@property (nonatomic, readonly, copy) NSArray *encryptionCertificates;
@property (nonatomic, readonly, copy) NSString *encryptionVersion;
@property (nonatomic, readonly, copy) PKDynamicProvisioningPageLearnMoreContent *learnMore;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSArray *requiredFieldsByPage;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) long long verificationContext;

- (void).cxx_destruct;
- (id)acceptableDocuments;
- (id)account;
- (bool)complete;
- (id)encryptionCertificates;
- (id)encryptionVersion;
- (id)initWithData:(id)arg1;
- (id)learnMore;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)requiredFieldsByPage;
- (void)setVerificationContext:(long long)arg1;
- (id)subtitle;
- (id)title;
- (long long)verificationContext;

@end
