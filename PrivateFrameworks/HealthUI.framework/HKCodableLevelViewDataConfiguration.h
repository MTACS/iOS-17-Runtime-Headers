
@interface HKCodableLevelViewDataConfiguration : PBCodable <NSCopying> {
    double  _normalizedValue;
    NSMutableArray * _sortedNormalizedBuckets;
}

@property (nonatomic) double normalizedValue;
@property (nonatomic, retain) NSMutableArray *sortedNormalizedBuckets;

+ (Class)sortedNormalizedBucketsType;

- (void).cxx_destruct;
- (void)addSortedNormalizedBuckets:(id)arg1;
- (void)clearSortedNormalizedBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)normalizedValue;
- (bool)readFrom:(id)arg1;
- (void)setNormalizedValue:(double)arg1;
- (void)setSortedNormalizedBuckets:(id)arg1;
- (id)sortedNormalizedBuckets;
- (id)sortedNormalizedBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortedNormalizedBucketsCount;
- (void)writeTo:(id)arg1;

@end
