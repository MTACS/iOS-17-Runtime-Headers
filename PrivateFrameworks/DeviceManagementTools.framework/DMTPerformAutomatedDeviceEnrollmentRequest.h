
@interface DMTPerformAutomatedDeviceEnrollmentRequest : CATTaskRequest {
    long long  _automationBehavior;
    NSString * _mdmServerName;
    long long  _networkConfiguration;
    DMTNetworkCredential * _networkCredential;
    NSData * _networkPayload;
    NSString * _nonce;
    NSString * _organizationName;
    long long  _organizationType;
}

@property (nonatomic) long long automationBehavior;
@property (nonatomic, readonly) long long effectiveNetworkConfiguration;
@property (nonatomic, copy) NSString *mdmServerName;
@property (nonatomic) long long networkConfiguration;
@property (nonatomic, copy) DMTNetworkCredential *networkCredential;
@property (nonatomic, retain) NSData *networkPayload;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic) long long organizationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)automationBehavior;
- (long long)effectiveNetworkConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mdmServerName;
- (long long)networkConfiguration;
- (id)networkCredential;
- (id)networkPayload;
- (id)nonce;
- (id)organizationName;
- (long long)organizationType;
- (void)setAutomationBehavior:(long long)arg1;
- (void)setMdmServerName:(id)arg1;
- (void)setNetworkConfiguration:(long long)arg1;
- (void)setNetworkCredential:(id)arg1;
- (void)setNetworkPayload:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setOrganizationType:(long long)arg1;

@end
