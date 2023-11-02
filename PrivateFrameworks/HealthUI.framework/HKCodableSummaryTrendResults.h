
@interface HKCodableSummaryTrendResults : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryTrendResults_1 { 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
    }  _has;
    long long  _latestSupportedVersion;
    long long  _minimumSupportedVersion;
    NSMutableArray * _trendValues;
}

@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) NSMutableArray *trendValues;

+ (Class)trendValuesType;

- (void).cxx_destruct;
- (void)addTrendValues:(id)arg1;
- (void)clearTrendValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatestSupportedVersion;
- (bool)hasMinimumSupportedVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setTrendValues:(id)arg1;
- (id)trendValues;
- (id)trendValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)trendValuesCount;
- (void)writeTo:(id)arg1;

@end
