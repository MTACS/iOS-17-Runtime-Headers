
@interface HKCodableChartBloodPressureDataSourceQueryData : PBCodable <NSCopying> {
    HKCodableStatisticsCollection * _diastolicStatisticsCollection;
    HKCodableStatisticsCollection * _systolicStatisticsCollection;
}

@property (nonatomic, retain) HKCodableStatisticsCollection *diastolicStatisticsCollection;
@property (nonatomic, readonly) bool hasDiastolicStatisticsCollection;
@property (nonatomic, readonly) bool hasSystolicStatisticsCollection;
@property (nonatomic, retain) HKCodableStatisticsCollection *systolicStatisticsCollection;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diastolicStatisticsCollection;
- (id)dictionaryRepresentation;
- (bool)hasDiastolicStatisticsCollection;
- (bool)hasSystolicStatisticsCollection;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDiastolicStatisticsCollection:(id)arg1;
- (void)setSystolicStatisticsCollection:(id)arg1;
- (id)systolicStatisticsCollection;
- (void)writeTo:(id)arg1;

@end
