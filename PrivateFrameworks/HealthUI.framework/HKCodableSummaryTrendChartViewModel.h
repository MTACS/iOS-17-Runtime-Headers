
@interface HKCodableSummaryTrendChartViewModel : PBCodable <NSCopying> {
    HKCodableDateInterval * _baselineDateInterval;
    HKCodableQuantity * _baselineQuantity;
    HKCodableDateInterval * _changeDateInterval;
    HKCodableQuantity * _changeQuantity;
    NSString * _changeTypeRawValue;
    NSString * _chartString;
    long long  _coveredTimeScopeRawValue;
    struct APPLE_HKCodableSummaryTrendChartViewModel_1 { 
        unsigned int coveredTimeScopeRawValue : 1; 
    }  _has;
    NSString * _objectTypeIdentifier;
}

@property (nonatomic, retain) HKCodableDateInterval *baselineDateInterval;
@property (nonatomic, retain) HKCodableQuantity *baselineQuantity;
@property (nonatomic, retain) HKCodableDateInterval *changeDateInterval;
@property (nonatomic, retain) HKCodableQuantity *changeQuantity;
@property (nonatomic, retain) NSString *changeTypeRawValue;
@property (nonatomic, retain) NSString *chartString;
@property (nonatomic) long long coveredTimeScopeRawValue;
@property (nonatomic, readonly) bool hasBaselineDateInterval;
@property (nonatomic, readonly) bool hasBaselineQuantity;
@property (nonatomic, readonly) bool hasChangeDateInterval;
@property (nonatomic, readonly) bool hasChangeQuantity;
@property (nonatomic, readonly) bool hasChangeTypeRawValue;
@property (nonatomic, readonly) bool hasChartString;
@property (nonatomic) bool hasCoveredTimeScopeRawValue;
@property (nonatomic, readonly) bool hasObjectTypeIdentifier;
@property (nonatomic, retain) NSString *objectTypeIdentifier;

- (void).cxx_destruct;
- (id)baselineDateInterval;
- (id)baselineQuantity;
- (id)changeDateInterval;
- (id)changeQuantity;
- (id)changeTypeRawValue;
- (id)chartString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)coveredTimeScopeRawValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBaselineDateInterval;
- (bool)hasBaselineQuantity;
- (bool)hasChangeDateInterval;
- (bool)hasChangeQuantity;
- (bool)hasChangeTypeRawValue;
- (bool)hasChartString;
- (bool)hasCoveredTimeScopeRawValue;
- (bool)hasObjectTypeIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setBaselineDateInterval:(id)arg1;
- (void)setBaselineQuantity:(id)arg1;
- (void)setChangeDateInterval:(id)arg1;
- (void)setChangeQuantity:(id)arg1;
- (void)setChangeTypeRawValue:(id)arg1;
- (void)setChartString:(id)arg1;
- (void)setCoveredTimeScopeRawValue:(long long)arg1;
- (void)setHasCoveredTimeScopeRawValue:(bool)arg1;
- (void)setObjectTypeIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
