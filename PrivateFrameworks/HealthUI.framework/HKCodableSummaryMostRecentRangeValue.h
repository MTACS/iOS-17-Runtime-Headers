
@interface HKCodableSummaryMostRecentRangeValue : PBCodable <NSCopying> {
    double  _dateData;
    struct APPLE_HKCodableSummaryMostRecentRangeValue_1 { 
        unsigned int dateData : 1; 
    }  _has;
    HKCodableQuantity * _maximumValue;
    HKCodableQuantity * _minimumValue;
}

@property (nonatomic) double dateData;
@property (nonatomic) bool hasDateData;
@property (nonatomic, readonly) bool hasMaximumValue;
@property (nonatomic, readonly) bool hasMinimumValue;
@property (nonatomic, retain) HKCodableQuantity *maximumValue;
@property (nonatomic, retain) HKCodableQuantity *minimumValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateData;
- (bool)hasMaximumValue;
- (bool)hasMinimumValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maximumValue;
- (void)mergeFrom:(id)arg1;
- (id)minimumValue;
- (bool)readFrom:(id)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
