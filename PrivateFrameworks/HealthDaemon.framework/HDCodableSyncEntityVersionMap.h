
@interface HDCodableSyncEntityVersionMap : PBCodable <NSCopying> {
    NSMutableArray * _entityVersionRanges;
}

@property (nonatomic, retain) NSMutableArray *entityVersionRanges;

+ (Class)entityVersionRangeType;

- (void).cxx_destruct;
- (void)addEntityVersionRange:(id)arg1;
- (void)clearEntityVersionRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityVersionRangeAtIndex:(unsigned long long)arg1;
- (id)entityVersionRanges;
- (unsigned long long)entityVersionRangesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityVersionRanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end
