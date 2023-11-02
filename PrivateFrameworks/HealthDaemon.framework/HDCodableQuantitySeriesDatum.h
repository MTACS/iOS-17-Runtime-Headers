
@interface HDCodableQuantitySeriesDatum : PBCodable <NSCopying> {
    double  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int value : 1; 
    }  _has;
    double  _startDate;
    double  _value;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasValue;
@property (nonatomic) double startDate;
@property (nonatomic) double value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasStartDate;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setStartDate:(double)arg1;
- (void)setValue:(double)arg1;
- (double)startDate;
- (double)value;
- (void)writeTo:(id)arg1;

@end
