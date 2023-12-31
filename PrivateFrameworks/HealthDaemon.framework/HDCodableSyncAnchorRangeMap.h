
@interface HDCodableSyncAnchorRangeMap : PBCodable <NSCopying> {
    NSMutableArray * _anchorRanges;
}

@property (nonatomic, retain) NSMutableArray *anchorRanges;

+ (Class)anchorRangesType;

- (void).cxx_destruct;
- (void)addAnchorRanges:(id)arg1;
- (id)anchorRanges;
- (id)anchorRangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)anchorRangesCount;
- (void)clearAnchorRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnchorRanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end
