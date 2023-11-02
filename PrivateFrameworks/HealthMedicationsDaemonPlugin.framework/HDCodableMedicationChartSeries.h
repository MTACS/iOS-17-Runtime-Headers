
@interface HDCodableMedicationChartSeries : PBCodable <NSCopying> {
    NSData * _monthData;
    NSData * _sixMonthsData;
}

@property (nonatomic, readonly) bool hasMonthData;
@property (nonatomic, readonly) bool hasSixMonthsData;
@property (nonatomic, retain) NSData *monthData;
@property (nonatomic, retain) NSData *sixMonthsData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMonthData;
- (bool)hasSixMonthsData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)monthData;
- (bool)readFrom:(id)arg1;
- (void)setMonthData:(id)arg1;
- (void)setSixMonthsData:(id)arg1;
- (id)sixMonthsData;
- (void)writeTo:(id)arg1;

@end
