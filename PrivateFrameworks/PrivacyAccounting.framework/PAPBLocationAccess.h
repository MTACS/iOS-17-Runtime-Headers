
@interface PAPBLocationAccess : PBCodable <NSCopying> {
    PAPBAccess * _access;
}

@property (nonatomic, retain) PAPBAccess *access;
@property (nonatomic, readonly) bool hasAccess;

- (void).cxx_destruct;
- (id)access;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)writeTo:(id)arg1;

@end
