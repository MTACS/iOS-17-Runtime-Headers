
@interface HKCodableSummaryTimePeriodValue : PBCodable <NSCopying> {
    double  _dateData;
    struct APPLE_HKCodableSummaryTimePeriodValue_1 { 
        unsigned int dateData : 1; 
        unsigned int timeInterval : 1; 
    }  _has;
    double  _timeInterval;
}

@property (nonatomic) double dateData;
@property (nonatomic) bool hasDateData;
@property (nonatomic) bool hasTimeInterval;
@property (nonatomic) double timeInterval;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateData;
- (bool)hasTimeInterval;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setHasTimeInterval:(bool)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;
- (void)writeTo:(id)arg1;

@end
