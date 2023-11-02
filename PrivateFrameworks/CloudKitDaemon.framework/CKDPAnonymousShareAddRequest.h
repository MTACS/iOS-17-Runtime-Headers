
@interface CKDPAnonymousShareAddRequest : PBRequest <NSCopying> {
    NSString * _anonymousShareTupleHash;
    NSData * _encryptedShareTuple;
}

@property (nonatomic, retain) NSString *anonymousShareTupleHash;
@property (nonatomic, retain) NSData *encryptedShareTuple;
@property (nonatomic, readonly) bool hasAnonymousShareTupleHash;
@property (nonatomic, readonly) bool hasEncryptedShareTuple;

+ (id)options;

- (void).cxx_destruct;
- (id)anonymousShareTupleHash;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedShareTuple;
- (bool)hasAnonymousShareTupleHash;
- (bool)hasEncryptedShareTuple;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnonymousShareTupleHash:(id)arg1;
- (void)setEncryptedShareTuple:(id)arg1;
- (void)writeTo:(id)arg1;

@end
