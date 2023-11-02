
@interface HKClinicalAccountConnectionInformation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _accountIdentifier;
    NSArray * _authSchemaDefinitions;
    HKFHIRServerAuthenticationInformation * _authentication;
    HKFHIRCredential * _authorization;
    HKClinicalGateway * _gateway;
    NSArray * _resourceSchemaDefinitions;
}

@property (nonatomic, readonly, copy) NSUUID *accountIdentifier;
@property (nonatomic, readonly, copy) NSArray *authSchemaDefinitions;
@property (nonatomic, readonly, copy) HKFHIRServerAuthenticationInformation *authentication;
@property (nonatomic, readonly, copy) HKFHIRCredential *authorization;
@property (nonatomic, readonly, copy) HKClinicalGateway *gateway;
@property (nonatomic, readonly, copy) NSArray *resourceSchemaDefinitions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)authSchemaDefinitions;
- (id)authentication;
- (id)authorization;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gateway;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 gateway:(id)arg2 authorization:(id)arg3 authentication:(id)arg4 authSchemaDefinitions:(id)arg5 resourceSchemaDefinitions:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)resourceSchemaDefinitions;

@end
