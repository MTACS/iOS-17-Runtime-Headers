
@interface HKCodableSummaryCardioFitnessValue : PBCodable <NSCopying> {
    long long  _classificationRawValue;
    double  _dateData;
    struct APPLE_HKCodableSummaryCardioFitnessValue_1 { 
        unsigned int classificationRawValue : 1; 
        unsigned int dateData : 1; 
    }  _has;
    HKCodableLevelViewDataConfiguration * _levelViewDataConfiguration;
    HKCodableQuantity * _value;
}

@property (nonatomic) long long classificationRawValue;
@property (nonatomic) double dateData;
@property (nonatomic) bool hasClassificationRawValue;
@property (nonatomic) bool hasDateData;
@property (nonatomic, readonly) bool hasLevelViewDataConfiguration;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) HKCodableLevelViewDataConfiguration *levelViewDataConfiguration;
@property (nonatomic, retain) HKCodableQuantity *value;

- (void).cxx_destruct;
- (long long)classificationRawValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClassificationRawValue;
- (bool)hasDateData;
- (bool)hasLevelViewDataConfiguration;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)levelViewDataConfiguration;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClassificationRawValue:(long long)arg1;
- (void)setDateData:(double)arg1;
- (void)setHasClassificationRawValue:(bool)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setLevelViewDataConfiguration:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
