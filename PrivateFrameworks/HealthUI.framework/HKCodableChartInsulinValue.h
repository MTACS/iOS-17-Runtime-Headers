
@interface HKCodableChartInsulinValue : PBCodable <NSCopying> {
    double  _endDate;
    struct APPLE_HKCodableChartInsulinValue_1 { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    }  _has;
    HKCodableQuantity * _insulinQuantity;
    double  _startDate;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic, readonly) bool hasInsulinQuantity;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, retain) HKCodableQuantity *insulinQuantity;
@property (nonatomic) double startDate;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasInsulinQuantity;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (id)insulinQuantity;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setInsulinQuantity:(id)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end
