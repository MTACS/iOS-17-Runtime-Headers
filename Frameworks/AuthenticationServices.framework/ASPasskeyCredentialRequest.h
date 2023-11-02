
@interface ASPasskeyCredentialRequest : NSObject <ASCredentialRequest> {
    NSData * _clientDataHash;
    <ASCredentialIdentity> * _credentialIdentity;
    NSArray * _supportedAlgorithms;
    NSString * _userVerificationPreference;
}

@property (nonatomic, readonly) NSData *clientDataHash;
@property (nonatomic, readonly) <ASCredentialIdentity> *credentialIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedAlgorithms;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSString *userVerificationPreference;

+ (id)requestWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLoginChoice:(id)arg1;
- (id)clientDataHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentity:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 supportedAlgorithms:(id)arg4;
- (void)setUserVerificationPreference:(id)arg1;
- (id)supportedAlgorithms;
- (long long)type;
- (id)userVerificationPreference;

@end
