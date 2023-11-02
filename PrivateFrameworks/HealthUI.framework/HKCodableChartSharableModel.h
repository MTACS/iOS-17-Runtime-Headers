
@interface HKCodableChartSharableModel : PBCodable <NSCopying> {
    HKCodableChartDataSourceQueryData * _dayData;
    HKCodableDateInterval * _dayDateInterval;
    struct APPLE_HKCodableChartSharableModel_1 { 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
    }  _has;
    long long  _latestSupportedVersion;
    long long  _minimumSupportedVersion;
    HKCodableChartDataSourceQueryData * _monthData;
    HKCodableDateInterval * _monthDateInterval;
    HKCodableChartDataSourceQueryData * _sixMonthData;
    HKCodableDateInterval * _sixMonthDateInterval;
    HKCodableChartDataSourceQueryData * _weekData;
    HKCodableDateInterval * _weekDateInterval;
}

@property (nonatomic, retain) HKCodableChartDataSourceQueryData *dayData;
@property (nonatomic, retain) HKCodableDateInterval *dayDateInterval;
@property (nonatomic, readonly) bool hasDayData;
@property (nonatomic, readonly) bool hasDayDateInterval;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic, readonly) bool hasMonthData;
@property (nonatomic, readonly) bool hasMonthDateInterval;
@property (nonatomic, readonly) bool hasSixMonthData;
@property (nonatomic, readonly) bool hasSixMonthDateInterval;
@property (nonatomic, readonly) bool hasWeekData;
@property (nonatomic, readonly) bool hasWeekDateInterval;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) HKCodableChartDataSourceQueryData *monthData;
@property (nonatomic, retain) HKCodableDateInterval *monthDateInterval;
@property (nonatomic, retain) HKCodableChartDataSourceQueryData *sixMonthData;
@property (nonatomic, retain) HKCodableDateInterval *sixMonthDateInterval;
@property (nonatomic, retain) HKCodableChartDataSourceQueryData *weekData;
@property (nonatomic, retain) HKCodableDateInterval *weekDateInterval;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayData;
- (id)dayDateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDayData;
- (bool)hasDayDateInterval;
- (bool)hasLatestSupportedVersion;
- (bool)hasMinimumSupportedVersion;
- (bool)hasMonthData;
- (bool)hasMonthDateInterval;
- (bool)hasSixMonthData;
- (bool)hasSixMonthDateInterval;
- (bool)hasWeekData;
- (bool)hasWeekDateInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (id)monthData;
- (id)monthDateInterval;
- (bool)readFrom:(id)arg1;
- (void)setDayData:(id)arg1;
- (void)setDayDateInterval:(id)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setMonthData:(id)arg1;
- (void)setMonthDateInterval:(id)arg1;
- (void)setSixMonthData:(id)arg1;
- (void)setSixMonthDateInterval:(id)arg1;
- (void)setWeekData:(id)arg1;
- (void)setWeekDateInterval:(id)arg1;
- (id)sixMonthData;
- (id)sixMonthDateInterval;
- (id)weekData;
- (id)weekDateInterval;
- (void)writeTo:(id)arg1;

@end
