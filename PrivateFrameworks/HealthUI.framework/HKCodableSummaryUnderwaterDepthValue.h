
@interface HKCodableSummaryUnderwaterDepthValue : PBCodable <NSCopying> {
    double  _dateData;
    struct APPLE_HKCodableSummaryUnderwaterDepthValue_1 { 
        unsigned int dateData : 1; 
        unsigned int valueClamped : 1; 
    }  _has;
    HKCodableQuantity * _value;
    bool  _valueClamped;
}

@property (nonatomic) double dateData;
@property (nonatomic) bool hasDateData;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) bool hasValueClamped;
@property (nonatomic, retain) HKCodableQuantity *value;
@property (nonatomic) bool valueClamped;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateData;
- (bool)hasValue;
- (bool)hasValueClamped;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setHasValueClamped:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueClamped:(bool)arg1;
- (id)value;
- (bool)valueClamped;
- (void)writeTo:(id)arg1;

@end
