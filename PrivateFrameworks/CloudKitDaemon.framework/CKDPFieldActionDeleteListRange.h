
@interface CKDPFieldActionDeleteListRange : PBCodable <NSCopying> {
    CKDPListRange * _range;
}

@property (nonatomic, readonly) bool hasRange;
@property (nonatomic, retain) CKDPListRange *range;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)range;
- (bool)readFrom:(id)arg1;
- (void)setRange:(id)arg1;
- (void)writeTo:(id)arg1;

@end
