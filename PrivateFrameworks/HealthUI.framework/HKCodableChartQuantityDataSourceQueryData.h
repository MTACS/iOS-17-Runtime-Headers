
@interface HKCodableChartQuantityDataSourceQueryData : PBCodable <NSCopying> {
    HKCodableStatisticsCollection * _statisticsCollection;
}

@property (nonatomic, readonly) bool hasStatisticsCollection;
@property (nonatomic, retain) HKCodableStatisticsCollection *statisticsCollection;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatisticsCollection;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStatisticsCollection:(id)arg1;
- (id)statisticsCollection;
- (void)writeTo:(id)arg1;

@end
