
@interface CKCDPTrustedTargetCryptoMetadata : PBCodable <NSCopying> {
    NSData * _encryptedInvocationKey;
    struct { 
        unsigned int keyVersion : 1; 
        unsigned int scheme : 1; 
    }  _has;
    long long  _keyVersion;
    NSString * _protectionSource;
    int  _scheme;
}

@property (nonatomic, retain) NSData *encryptedInvocationKey;
@property (nonatomic, readonly) bool hasEncryptedInvocationKey;
@property (nonatomic) bool hasKeyVersion;
@property (nonatomic, readonly) bool hasProtectionSource;
@property (nonatomic) bool hasScheme;
@property (nonatomic) long long keyVersion;
@property (nonatomic, retain) NSString *protectionSource;
@property (nonatomic) int scheme;

- (void).cxx_destruct;
- (int)StringAsScheme:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedInvocationKey;
- (bool)hasEncryptedInvocationKey;
- (bool)hasKeyVersion;
- (bool)hasProtectionSource;
- (bool)hasScheme;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)keyVersion;
- (void)mergeFrom:(id)arg1;
- (id)protectionSource;
- (bool)readFrom:(id)arg1;
- (int)scheme;
- (id)schemeAsString:(int)arg1;
- (void)setEncryptedInvocationKey:(id)arg1;
- (void)setHasKeyVersion:(bool)arg1;
- (void)setHasScheme:(bool)arg1;
- (void)setKeyVersion:(long long)arg1;
- (void)setProtectionSource:(id)arg1;
- (void)setScheme:(int)arg1;
- (void)writeTo:(id)arg1;

@end
