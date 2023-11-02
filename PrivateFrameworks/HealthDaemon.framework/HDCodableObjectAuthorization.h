
@interface HDCodableObjectAuthorization : PBCodable <NSCopying> {
    NSMutableArray * _authorizations;
    NSData * _objectUUID;
}

@property (nonatomic, retain) NSMutableArray *authorizations;
@property (nonatomic, readonly) bool hasObjectUUID;
@property (nonatomic, retain) NSData *objectUUID;

+ (Class)authorizationsType;

- (void).cxx_destruct;
- (void)addAuthorizations:(id)arg1;
- (id)authorizations;
- (id)authorizationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectUUID;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizations:(id)arg1;
- (void)setObjectUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end