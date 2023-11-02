
@interface HKCodableSummaryWalkingSteadinessValue : PBCodable <NSCopying> {
    long long  _classificationRawValue;
    struct APPLE_HKCodableSummaryWalkingSteadinessValue_1 { 
        unsigned int classificationRawValue : 1; 
    }  _has;
    HKCodableLevelViewDataConfiguration * _levelViewDataConfiguration;
    HKCodableSummaryQuantityValue * _quantity;
}

@property (nonatomic) long long classificationRawValue;
@property (nonatomic) bool hasClassificationRawValue;
@property (nonatomic, readonly) bool hasLevelViewDataConfiguration;
@property (nonatomic, readonly) bool hasQuantity;
@property (nonatomic, retain) HKCodableLevelViewDataConfiguration *levelViewDataConfiguration;
@property (nonatomic, retain) HKCodableSummaryQuantityValue *quantity;

- (void).cxx_destruct;
- (long long)classificationRawValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClassificationRawValue;
- (bool)hasLevelViewDataConfiguration;
- (bool)hasQuantity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)levelViewDataConfiguration;
- (void)mergeFrom:(id)arg1;
- (id)quantity;
- (bool)readFrom:(id)arg1;
- (void)setClassificationRawValue:(long long)arg1;
- (void)setHasClassificationRawValue:(bool)arg1;
- (void)setLevelViewDataConfiguration:(id)arg1;
- (void)setQuantity:(id)arg1;
- (void)writeTo:(id)arg1;

@end
