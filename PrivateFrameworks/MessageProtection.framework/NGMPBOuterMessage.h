
@interface NGMPBOuterMessage : PBCodable <NSCopying> {
    NSData * _encryptedPayload;
    NSData * _ephemeralPubKey;
    NSData * _keyValidator;
    NSData * _secondaryMessage;
    NSData * _signature;
}

@property (nonatomic, retain) NSData *encryptedPayload;
@property (nonatomic, retain) NSData *ephemeralPubKey;
@property (nonatomic, readonly) bool hasEncryptedPayload;
@property (nonatomic, readonly) bool hasEphemeralPubKey;
@property (nonatomic, readonly) bool hasKeyValidator;
@property (nonatomic, readonly) bool hasSecondaryMessage;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic, retain) NSData *keyValidator;
@property (nonatomic, retain) NSData *secondaryMessage;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedPayload;
- (id)ephemeralPubKey;
- (bool)hasEncryptedPayload;
- (bool)hasEphemeralPubKey;
- (bool)hasKeyValidator;
- (bool)hasSecondaryMessage;
- (bool)hasSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyValidator;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryMessage;
- (void)setEncryptedPayload:(id)arg1;
- (void)setEphemeralPubKey:(id)arg1;
- (void)setKeyValidator:(id)arg1;
- (void)setSecondaryMessage:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
