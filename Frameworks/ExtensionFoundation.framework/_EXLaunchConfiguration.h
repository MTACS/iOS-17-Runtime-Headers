
@interface _EXLaunchConfiguration : NSObject <NSSecureCoding> {
    void _extensionIdentity;
    void additionalEnvironmentVariables;
    void instanceIdentifier;
    void launchPersona;
    void preferredLanguages;
    void sandboxProfileName;
}

@property (nonatomic, copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (nonatomic, copy) _EXPersona *launchPersona;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *sandboxProfileName;

+ (bool)configureLaunchContext:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalEnvironmentVariables;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentity;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentity:(id)arg1;
- (id)instanceIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isLaunchConfigurationEqual:(id)arg1;
- (id)launchPersona;
- (id)preferredLanguages;
- (id)rbsProcessIdentityWithHost:(id)arg1;
- (id)sandboxProfileName;
- (void)setAdditionalEnvironmentVariables:(id)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setLaunchPersona:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setSandboxProfileName:(id)arg1;

@end
