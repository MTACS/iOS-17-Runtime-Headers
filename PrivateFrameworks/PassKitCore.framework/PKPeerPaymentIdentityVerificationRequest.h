
@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest {
    NSArray * _certificates;
    bool  _devSigned;
    NSString * _prerequisiteIdentifier;
    long long  _verificationContext;
}

@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSString *prerequisiteIdentifier;
@property (nonatomic) long long verificationContext;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 odiAssessment:(id)arg5 deviceMetadata:(id)arg6;
- (id)certificates;
- (bool)devSigned;
- (id)prerequisiteIdentifier;
- (void)setCertificates:(id)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setPrerequisiteIdentifier:(id)arg1;
- (void)setVerificationContext:(long long)arg1;
- (long long)verificationContext;

@end
