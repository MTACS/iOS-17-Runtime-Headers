
@interface TPPBCustodianRecoveryKey : PBCodable <NSCopying> {
    NSData * _encryptionPublicKey;
    struct { 
        unsigned int kind : 1; 
    }  _has;
    int  _kind;
    NSData * _signingPublicKey;
    NSString * _uuid;
}

@property (nonatomic, retain) NSData *encryptionPublicKey;
@property (nonatomic, readonly) bool hasEncryptionPublicKey;
@property (nonatomic) bool hasKind;
@property (nonatomic, readonly) bool hasSigningPublicKey;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) int kind;
@property (nonatomic, retain) NSData *signingPublicKey;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsKind:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionPublicKey;
- (bool)hasEncryptionPublicKey;
- (bool)hasKind;
- (bool)hasSigningPublicKey;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (id)kindAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptionPublicKey:(id)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setKind:(int)arg1;
- (void)setSigningPublicKey:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)signingPublicKey;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
