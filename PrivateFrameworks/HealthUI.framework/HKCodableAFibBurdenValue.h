
@interface HKCodableAFibBurdenValue : PBCodable <NSCopying> {
    HKCodableDayIndexRange * _dayIndexRange;
    struct APPLE_HKCodableAFibBurdenValue_1 { 
        unsigned int valueClamped : 1; 
    }  _has;
    HKCodableQuantity * _value;
    bool  _valueClamped;
}

@property (nonatomic, retain) HKCodableDayIndexRange *dayIndexRange;
@property (nonatomic, readonly) bool hasDayIndexRange;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) bool hasValueClamped;
@property (nonatomic, retain) HKCodableQuantity *value;
@property (nonatomic) bool valueClamped;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayIndexRange;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDayIndexRange;
- (bool)hasValue;
- (bool)hasValueClamped;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDayIndexRange:(id)arg1;
- (void)setHasValueClamped:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueClamped:(bool)arg1;
- (id)value;
- (bool)valueClamped;
- (void)writeTo:(id)arg1;

@end
