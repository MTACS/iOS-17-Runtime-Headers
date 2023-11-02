
@interface PKProtobufRecurringPaymentSummaryItem : PBCodable <NSCopying> {
    double  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int intervalCount : 1; 
        unsigned int intervalUnit : 1; 
    }  _has;
    unsigned int  _intervalCount;
    unsigned int  _intervalUnit;
    double  _startDate;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasIntervalCount;
@property (nonatomic) bool hasIntervalUnit;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) unsigned int intervalCount;
@property (nonatomic) unsigned int intervalUnit;
@property (nonatomic) double startDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasIntervalCount;
- (bool)hasIntervalUnit;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (unsigned int)intervalCount;
- (unsigned int)intervalUnit;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasIntervalCount:(bool)arg1;
- (void)setHasIntervalUnit:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setIntervalCount:(unsigned int)arg1;
- (void)setIntervalUnit:(unsigned int)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
