
@interface HKCodableChartFeedItemData : PBCodable <NSCopying> {
    HKCodableChartSharableModel * _chartModel;
    NSMutableArray * _trends;
}

@property (nonatomic, retain) HKCodableChartSharableModel *chartModel;
@property (nonatomic, readonly) bool hasChartModel;
@property (nonatomic, retain) NSMutableArray *trends;

+ (Class)trendsType;

- (void).cxx_destruct;
- (void)addTrends:(id)arg1;
- (id)chartModel;
- (void)clearTrends;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChartModel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChartModel:(id)arg1;
- (void)setTrends:(id)arg1;
- (id)trends;
- (id)trendsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trendsCount;
- (void)writeTo:(id)arg1;

@end
