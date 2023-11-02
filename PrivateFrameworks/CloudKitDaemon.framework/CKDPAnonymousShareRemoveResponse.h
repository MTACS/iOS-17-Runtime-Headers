
@interface CKDPAnonymousShareRemoveResponse : PBCodable <NSCopying> {
    NSString * _anonymousShareTupleHash;
}

@property (nonatomic, retain) NSString *anonymousShareTupleHash;
@property (nonatomic, readonly) bool hasAnonymousShareTupleHash;

- (void).cxx_destruct;
- (id)anonymousShareTupleHash;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnonymousShareTupleHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymousShareTupleHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end
