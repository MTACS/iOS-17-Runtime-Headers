
@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int latestSampleStartTime : 1; 
    }  _has;
    double  _latestSampleStartTime;
    NSMutableArray * _results;
}

@property (nonatomic) bool hasLatestSampleStartTime;
@property (nonatomic) double latestSampleStartTime;
@property (nonatomic, retain) NSMutableArray *results;

+ (Class)resultsType;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatestSampleStartTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latestSampleStartTime;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setHasLatestSampleStartTime:(bool)arg1;
- (void)setLatestSampleStartTime:(double)arg1;
- (void)setResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
