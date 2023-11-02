
@interface HKCodableChartDataSourceQueryData : PBCodable <NSCopying> {
    double  _endDate;
    long long  _firstWeekday;
    struct APPLE_HKCodableChartDataSourceQueryData_1 { 
        unsigned int endDate : 1; 
        unsigned int firstWeekday : 1; 
        unsigned int startDate : 1; 
        unsigned int type : 1; 
    }  _has;
    NSData * _queryDataObject;
    double  _startDate;
    HKCodableDateComponents * _statisticsInterval;
    NSString * _timeZoneName;
    int  _type;
}

@property (nonatomic) double endDate;
@property (nonatomic) long long firstWeekday;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasFirstWeekday;
@property (nonatomic, readonly) bool hasQueryDataObject;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasStatisticsInterval;
@property (nonatomic, readonly) bool hasTimeZoneName;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSData *queryDataObject;
@property (nonatomic) double startDate;
@property (nonatomic, retain) HKCodableDateComponents *statisticsInterval;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (long long)firstWeekday;
- (bool)hasEndDate;
- (bool)hasFirstWeekday;
- (bool)hasQueryDataObject;
- (bool)hasStartDate;
- (bool)hasStatisticsInterval;
- (bool)hasTimeZoneName;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryDataObject;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setFirstWeekday:(long long)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasFirstWeekday:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setQueryDataObject:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setStatisticsInterval:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setType:(int)arg1;
- (double)startDate;
- (id)statisticsInterval;
- (id)timeZoneName;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
