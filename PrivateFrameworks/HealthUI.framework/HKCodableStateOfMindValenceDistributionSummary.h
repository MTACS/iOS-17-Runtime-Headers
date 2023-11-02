
@interface HKCodableStateOfMindValenceDistributionSummary : PBCodable <NSCopying> {
    HKCodableDayIndexRange * _dayIndexRange;
    NSMutableArray * _valenceDistributionDatas;
}

@property (nonatomic, retain) HKCodableDayIndexRange *dayIndexRange;
@property (nonatomic, readonly) bool hasDayIndexRange;
@property (nonatomic, retain) NSMutableArray *valenceDistributionDatas;

+ (Class)valenceDistributionDataType;

- (void).cxx_destruct;
- (void)addValenceDistributionData:(id)arg1;
- (void)clearValenceDistributionDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayIndexRange;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDayIndexRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDayIndexRange:(id)arg1;
- (void)setValenceDistributionDatas:(id)arg1;
- (id)valenceDistributionDataAtIndex:(unsigned long long)arg1;
- (id)valenceDistributionDatas;
- (unsigned long long)valenceDistributionDatasCount;
- (void)writeTo:(id)arg1;

@end
