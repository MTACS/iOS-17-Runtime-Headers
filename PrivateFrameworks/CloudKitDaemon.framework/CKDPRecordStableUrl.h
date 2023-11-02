
@interface CKDPRecordStableUrl : PBCodable <NSCopying> {
    NSString * _displayedHostname;
    NSData * _encryptedPublicSharingKey;
    NSData * _protectedFullToken;
    NSString * _routingKey;
    NSData * _shortTokenHash;
}

@property (nonatomic, retain) NSString *displayedHostname;
@property (nonatomic, retain) NSData *encryptedPublicSharingKey;
@property (nonatomic, readonly) bool hasDisplayedHostname;
@property (nonatomic, readonly) bool hasEncryptedPublicSharingKey;
@property (nonatomic, readonly) bool hasProtectedFullToken;
@property (nonatomic, readonly) bool hasRoutingKey;
@property (nonatomic, readonly) bool hasShortTokenHash;
@property (nonatomic, retain) NSData *protectedFullToken;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortTokenHash;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedHostname;
- (id)encryptedPublicSharingKey;
- (bool)hasDisplayedHostname;
- (bool)hasEncryptedPublicSharingKey;
- (bool)hasProtectedFullToken;
- (bool)hasRoutingKey;
- (bool)hasShortTokenHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectedFullToken;
- (bool)readFrom:(id)arg1;
- (id)routingKey;
- (void)setDisplayedHostname:(id)arg1;
- (void)setEncryptedPublicSharingKey:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end
