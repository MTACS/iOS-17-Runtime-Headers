
@interface HKCodableSummaryBloodPressureValue : PBCodable <NSCopying> {
    HKCodableQuantity * _diastolicValue;
    struct APPLE_HKCodableSummaryBloodPressureValue_1 { 
        unsigned int timestampData : 1; 
    }  _has;
    HKCodableQuantity * _systolicValue;
    double  _timestampData;
}

@property (nonatomic, retain) HKCodableQuantity *diastolicValue;
@property (nonatomic, readonly) bool hasDiastolicValue;
@property (nonatomic, readonly) bool hasSystolicValue;
@property (nonatomic) bool hasTimestampData;
@property (nonatomic, retain) HKCodableQuantity *systolicValue;
@property (nonatomic) double timestampData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diastolicValue;
- (id)dictionaryRepresentation;
- (bool)hasDiastolicValue;
- (bool)hasSystolicValue;
- (bool)hasTimestampData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDiastolicValue:(id)arg1;
- (void)setHasTimestampData:(bool)arg1;
- (void)setSystolicValue:(id)arg1;
- (void)setTimestampData:(double)arg1;
- (id)systolicValue;
- (double)timestampData;
- (void)writeTo:(id)arg1;

@end
