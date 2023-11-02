
@interface DCCredentialCryptoKey : NSObject <NSSecureCoding> {
    NSArray * _attestation;
    NSData * _casdAttestation;
    NSData * _casdSignature;
    NSString * _identifier;
    NSData * _keyAuthorization;
    unsigned long long  _keyType;
    unsigned long long  _keyUsage;
    NSArray * _kskAttestation;
    NSData * _progenitorKeyAttestation;
    NSData * _publicKey;
    NSData * _publicKeyCOSEKey;
    NSData * _publicKeyIdentifier;
}

@property (nonatomic, retain) NSArray *attestation;
@property (nonatomic, retain) NSData *casdAttestation;
@property (nonatomic, retain) NSData *casdSignature;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *keyAuthorization;
@property (nonatomic) unsigned long long keyType;
@property (nonatomic) unsigned long long keyUsage;
@property (nonatomic, retain) NSArray *kskAttestation;
@property (nonatomic, retain) NSData *progenitorKeyAttestation;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSData *publicKeyCOSEKey;
@property (nonatomic, retain) NSData *publicKeyIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestation;
- (id)casdAttestation;
- (id)casdSignature;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 publicKeyIdentifier:(id)arg3 publicKeyCOSEKey:(id)arg4 keyType:(unsigned long long)arg5 keyUsage:(unsigned long long)arg6 attestation:(id)arg7;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 publicKeyIdentifier:(id)arg3 publicKeyCOSEKey:(id)arg4 keyType:(unsigned long long)arg5 keyUsage:(unsigned long long)arg6 attestation:(id)arg7 keyAuthorization:(id)arg8 kskAttestation:(id)arg9;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 publicKeyIdentifier:(id)arg3 publicKeyCOSEKey:(id)arg4 keyType:(unsigned long long)arg5 keyUsage:(unsigned long long)arg6 casdSignature:(id)arg7 casdAttestation:(id)arg8 keyAuthorization:(id)arg9 kskAttestation:(id)arg10;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 publicKeyIdentifier:(id)arg3 publicKeyCOSEKey:(id)arg4 keyType:(unsigned long long)arg5 keyUsage:(unsigned long long)arg6 progenitorKeyAttestation:(id)arg7 casdAttestation:(id)arg8 keyAuthorization:(id)arg9 kskAttestation:(id)arg10;
- (id)keyAuthorization;
- (unsigned long long)keyType;
- (unsigned long long)keyUsage;
- (id)kskAttestation;
- (id)progenitorKeyAttestation;
- (id)publicKey;
- (id)publicKeyCOSEKey;
- (id)publicKeyIdentifier;
- (void)setAttestation:(id)arg1;
- (void)setCasdAttestation:(id)arg1;
- (void)setCasdSignature:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyAuthorization:(id)arg1;
- (void)setKeyType:(unsigned long long)arg1;
- (void)setKeyUsage:(unsigned long long)arg1;
- (void)setKskAttestation:(id)arg1;
- (void)setProgenitorKeyAttestation:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyCOSEKey:(id)arg1;
- (void)setPublicKeyIdentifier:(id)arg1;

@end
