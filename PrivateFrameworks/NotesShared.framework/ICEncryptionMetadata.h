
@interface ICEncryptionMetadata : NSObject <NSCopying> {
    NSString * _accountKeyIdentifier;
    NSData * _authenticatedData;
    long long  _cipherVersion;
    NSString * _objectIdentifier;
    NSString * _passphraseHint;
    unsigned long long  _passphraseIterationCount;
    NSData * _passphraseSalt;
    NSData * _serializedData;
}

@property (nonatomic, readonly) NSString *accountKeyIdentifier;
@property (nonatomic, readonly) NSData *authenticatedData;
@property (nonatomic, readonly) long long cipherVersion;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, readonly) unsigned long long passphraseIterationCount;
@property (nonatomic, readonly) NSData *passphraseSalt;
@property (nonatomic, readonly) NSData *serializedData;

+ (id)makeForV1CipherWithObjectIdentifier:(id)arg1 salt:(id)arg2 iterationCount:(unsigned long long)arg3 hint:(id)arg4;
+ (id)makeForV1NeoCipherWithObjectIdentifier:(id)arg1 salt:(id)arg2 iterationCount:(unsigned long long)arg3 hint:(id)arg4;
+ (id)makeForV1NeoSidecarCipherWithObjectIdentifier:(id)arg1;
+ (id)makeForV2CipherWithObjectIdentifier:(id)arg1 accountKeyIdentifier:(id)arg2;
+ (id)makeFromMetadata:(id)arg1 forObjectIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)accountKeyIdentifier;
- (id)authenticatedData;
- (long long)cipherVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deserializeWithData:(id)arg1 authenticatedData:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCipherVersion:(long long)arg1 objectIdentifier:(id)arg2 passphraseSalt:(id)arg3 passphraseIterationCount:(unsigned long long)arg4 passphraseHint:(id)arg5 accountKeyIdentifier:(id)arg6;
- (id)initWithSerializedData:(id)arg1 authenticatedData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectIdentifier;
- (id)passphraseHint;
- (unsigned long long)passphraseIterationCount;
- (id)passphraseSalt;
- (bool)serialize;
- (id)serializedData;
- (bool)validate;

@end
