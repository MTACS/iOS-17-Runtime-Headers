
@interface _MRGroupSessionJoinRequestProtobuf : PBCodable <NSCopying> {
    _MRUserIdentityProtobuf * _identity;
}

@property (nonatomic, readonly) bool hasIdentity;
@property (nonatomic, retain) _MRUserIdentityProtobuf *identity;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentity;
- (unsigned long long)hash;
- (id)identity;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)writeTo:(id)arg1;

@end
