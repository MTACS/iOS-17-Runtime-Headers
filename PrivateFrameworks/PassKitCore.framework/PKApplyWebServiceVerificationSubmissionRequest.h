
@interface PKApplyWebServiceVerificationSubmissionRequest : PKApplyWebServiceRequest {
    NSString * _applicationIdentifier;
    NSURL * _baseURL;
    long long  _channel;
    unsigned long long  _featureIdentifier;
    NSString * _odiAssessment;
    bool  _skippedVerification;
    NSString * _verificationData;
    unsigned long long  _verificationType;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) long long channel;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, copy) NSString *odiAssessment;
@property (nonatomic) bool skippedVerification;
@property (nonatomic, copy) NSString *verificationData;
@property (nonatomic) unsigned long long verificationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)applicationIdentifier;
- (id)baseURL;
- (long long)channel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)odiAssessment;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setChannel:(long long)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setOdiAssessment:(id)arg1;
- (void)setSkippedVerification:(bool)arg1;
- (void)setVerificationData:(id)arg1;
- (void)setVerificationType:(unsigned long long)arg1;
- (bool)skippedVerification;
- (id)verificationData;
- (unsigned long long)verificationType;

@end
