
@interface HKCodableTimePeriodData : PBCodable <NSCopying> {
    HKCodableDateInterval * _dateInterval;
    struct APPLE_HKCodableTimePeriodData_1 { 
        unsigned int total : 1; 
    }  _has;
    long long  _total;
}

@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic) bool hasTotal;
@property (nonatomic) long long total;

+ (id)timePeriodDataWithCodableData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateInterval;
- (bool)hasTotal;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHasTotal:(bool)arg1;
- (void)setTotal:(long long)arg1;
- (long long)total;
- (void)writeTo:(id)arg1;

@end
