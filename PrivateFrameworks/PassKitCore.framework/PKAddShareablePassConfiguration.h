
@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration {
    NSArray * _credentialsMetadata;
    unsigned long long  _primaryAction;
    NSString * _provisioningPolicyIdentifier;
    bool  _skipNonceValidityChecks;
}

@property (nonatomic, readonly) NSArray *credentialsMetadata;
@property (nonatomic, readonly) unsigned long long primaryAction;
@property (nonatomic, readonly) NSString *provisioningPolicyIdentifier;
@property (nonatomic, readonly) bool requiresUnifiedAccessCapableDevice;
@property (nonatomic) bool skipNonceValidityChecks;

+ (void)_configurationForPassMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 primaryAction:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)configurationForPassMetadata:(id)arg1 primaryAction:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)configurationForPassMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 primaryAction:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialsMetadata;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRequiredDataForProvisioning;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryAction:(unsigned long long)arg1 credentialsMetadata:(id)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (unsigned long long)primaryAction;
- (id)provisioningPolicyIdentifier;
- (bool)requiresUnifiedAccessCapableDevice;
- (void)setSkipNonceValidityChecks:(bool)arg1;
- (bool)skipNonceValidityChecks;

@end
