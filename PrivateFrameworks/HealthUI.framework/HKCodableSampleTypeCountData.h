
@interface HKCodableSampleTypeCountData : PBCodable <NSCopying> {
    long long  _count;
    double  _endDate;
    struct APPLE_HKCodableSampleTypeCountData_1 { 
        unsigned int count : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    double  _startDate;
}

@property (nonatomic) long long count;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) double startDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasCount;
- (bool)hasEndDate;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
