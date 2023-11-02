
@interface MICodeSigningInfo : NSObject {
    NSString * _codeInfoIdentifier;
    unsigned long long  _codeSignerType;
    NSDictionary * _entitlements;
    unsigned long long  _profileValidationType;
    NSNumber * _signatureVersion;
    NSString * _signerIdentity;
    NSString * _signerOrganization;
    unsigned long long  _signingInfoSource;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly, copy) NSString *codeInfoIdentifier;
@property (nonatomic, readonly) unsigned long long codeSignerType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *entitlements;
@property (nonatomic, readonly) unsigned long long profileValidationType;
@property (nonatomic, readonly, copy) NSNumber *signatureVersion;
@property (nonatomic, readonly, copy) NSString *signerIdentity;
@property (nonatomic, readonly, copy) NSString *signerOrganization;
@property (nonatomic, readonly) unsigned long long signingInfoSource;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)codeInfoIdentifier;
- (unsigned long long)codeSignerType;
- (id)dictionaryRepresentation;
- (id)entitlements;
- (id)initForTesting;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 fromSource:(unsigned long long)arg2;
- (id)initWithSignerIdentity:(id)arg1 signerOrganization:(id)arg2 codeInfoIdentifier:(id)arg3 teamIdentifier:(id)arg4 signatureVersion:(id)arg5 entitlements:(id)arg6 signerType:(unsigned long long)arg7 profileType:(unsigned long long)arg8 signingInfoSource:(unsigned long long)arg9;
- (unsigned long long)profileValidationType;
- (id)signatureVersion;
- (id)signerIdentity;
- (id)signerOrganization;
- (unsigned long long)signingInfoSource;
- (id)teamIdentifier;

@end
