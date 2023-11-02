
@interface HKCodableChartTimePeriodSeriesDataSourceData : PBCodable <NSCopying> {
    NSMutableArray * _dateIntervalsToTotals;
    NSMutableArray * _intervalCounts;
    HKCodableDateComponents * _statisticsInterval;
}

@property (nonatomic, retain) NSMutableArray *dateIntervalsToTotals;
@property (nonatomic, readonly) bool hasStatisticsInterval;
@property (nonatomic, retain) NSMutableArray *intervalCounts;
@property (nonatomic, retain) HKCodableDateComponents *statisticsInterval;

+ (Class)dateIntervalsToTotalsType;
+ (Class)intervalCountsType;

- (void).cxx_destruct;
- (void)addDateIntervalsToTotals:(id)arg1;
- (void)addIntervalCounts:(id)arg1;
- (void)clearDateIntervalsToTotals;
- (void)clearIntervalCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervalsToTotals;
- (id)dateIntervalsToTotalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dateIntervalsToTotalsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatisticsInterval;
- (unsigned long long)hash;
- (id)intervalCounts;
- (id)intervalCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)intervalCountsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateIntervalsToTotals:(id)arg1;
- (void)setIntervalCounts:(id)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (id)statisticsInterval;
- (void)writeTo:(id)arg1;

@end
