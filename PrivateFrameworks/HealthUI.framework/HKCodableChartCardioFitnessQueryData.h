
@interface HKCodableChartCardioFitnessQueryData : PBCodable <NSCopying> {
    long long  _age;
    long long  _biologicalSex;
    long long  _cardioFitnessLevelEnabled;
    struct APPLE_HKCodableChartCardioFitnessQueryData_1 { 
        unsigned int age : 1; 
        unsigned int biologicalSex : 1; 
        unsigned int cardioFitnessLevelEnabled : 1; 
    }  _has;
    HKCodableChartQuantityDataSourceQueryData * _quantityData;
}

@property (nonatomic) long long age;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long cardioFitnessLevelEnabled;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasBiologicalSex;
@property (nonatomic) bool hasCardioFitnessLevelEnabled;
@property (nonatomic, readonly) bool hasQuantityData;
@property (nonatomic, retain) HKCodableChartQuantityDataSourceQueryData *quantityData;

- (void).cxx_destruct;
- (long long)age;
- (long long)biologicalSex;
- (long long)cardioFitnessLevelEnabled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasBiologicalSex;
- (bool)hasCardioFitnessLevelEnabled;
- (bool)hasQuantityData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quantityData;
- (bool)readFrom:(id)arg1;
- (void)setAge:(long long)arg1;
- (void)setBiologicalSex:(long long)arg1;
- (void)setCardioFitnessLevelEnabled:(long long)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasBiologicalSex:(bool)arg1;
- (void)setHasCardioFitnessLevelEnabled:(bool)arg1;
- (void)setQuantityData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
