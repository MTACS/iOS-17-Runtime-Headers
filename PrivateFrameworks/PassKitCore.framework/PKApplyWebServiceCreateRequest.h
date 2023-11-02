
@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest {
    NSString * _accountIdentifier;
    long long  _applicationType;
    NSURL * _applyServiceURL;
    long long  _associatedIntent;
    long long  _channel;
    unsigned long long  _featureIdentifier;
    unsigned long long  _featureProduct;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    PKFeatureApplicationInvitationDetails * _invitationDetails;
    NSString * _odiAssessment;
    NSString * _preliminaryAssessmentIdentifier;
    NSString * _referenceIdentifier;
    long long  _updateUserInfoSubType;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long applicationType;
@property (nonatomic, retain) NSURL *applyServiceURL;
@property (nonatomic) long long associatedIntent;
@property (nonatomic) long long channel;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) unsigned long long featureProduct;
@property (nonatomic, retain) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic, retain) PKFeatureApplicationInvitationDetails *invitationDetails;
@property (nonatomic, copy) NSString *odiAssessment;
@property (nonatomic, copy) NSString *preliminaryAssessmentIdentifier;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic) long long updateUserInfoSubType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)accountIdentifier;
- (long long)applicationType;
- (id)applyServiceURL;
- (long long)associatedIntent;
- (long long)channel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureIdentifier;
- (unsigned long long)featureProduct;
- (id)initWithCoder:(id)arg1;
- (id)installmentConfiguration;
- (id)invitationDetails;
- (id)odiAssessment;
- (id)preliminaryAssessmentIdentifier;
- (id)referenceIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setApplicationType:(long long)arg1;
- (void)setApplyServiceURL:(id)arg1;
- (void)setAssociatedIntent:(long long)arg1;
- (void)setChannel:(long long)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setFeatureProduct:(unsigned long long)arg1;
- (void)setInstallmentConfiguration:(id)arg1;
- (void)setInvitationDetails:(id)arg1;
- (void)setOdiAssessment:(id)arg1;
- (void)setPreliminaryAssessmentIdentifier:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setUpdateUserInfoSubType:(long long)arg1;
- (long long)updateUserInfoSubType;

@end
