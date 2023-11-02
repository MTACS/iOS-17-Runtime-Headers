
@interface HKCodableSummaryQuantityValue : PBCodable <NSCopying> {
    double  _dateData;
    struct APPLE_HKCodableSummaryQuantityValue_1 { 
        unsigned int dateData : 1; 
    }  _has;
    HKCodableQuantity * _value;
}

@property (nonatomic) double dateData;
@property (nonatomic) bool hasDateData;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) HKCodableQuantity *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateData;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
