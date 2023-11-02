
@interface SharedOwnershipAuth : PBCodable <NSCopying> {
    NSData * _channelPublicKey;
    NSData * _nonce;
    NSData * _serverEncryptionKey;
    NSData * _signNonce;
    NSString * _simpleJwt;
}

@property (nonatomic, retain) NSData *channelPublicKey;
@property (nonatomic, readonly) bool hasChannelPublicKey;
@property (nonatomic, readonly) bool hasNonce;
@property (nonatomic, readonly) bool hasServerEncryptionKey;
@property (nonatomic, readonly) bool hasSignNonce;
@property (nonatomic, readonly) bool hasSimpleJwt;
@property (nonatomic, retain) NSData *nonce;
@property (nonatomic, retain) NSData *serverEncryptionKey;
@property (nonatomic, retain) NSData *signNonce;
@property (nonatomic, retain) NSString *simpleJwt;

- (void).cxx_destruct;
- (id)channelPublicKey;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChannelPublicKey;
- (bool)hasNonce;
- (bool)hasServerEncryptionKey;
- (bool)hasSignNonce;
- (bool)hasSimpleJwt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonce;
- (bool)readFrom:(id)arg1;
- (id)serverEncryptionKey;
- (void)setChannelPublicKey:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setServerEncryptionKey:(id)arg1;
- (void)setSignNonce:(id)arg1;
- (void)setSimpleJwt:(id)arg1;
- (id)signNonce;
- (id)simpleJwt;
- (void)writeTo:(id)arg1;

@end
