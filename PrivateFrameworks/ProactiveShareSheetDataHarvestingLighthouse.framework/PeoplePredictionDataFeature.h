
@interface PeoplePredictionDataFeature : PBCodable <NSCopying> {
    unsigned int  _eventVolumeToComputeFeature;
    unsigned int  _featureFreshnessInHours;
    unsigned int  _featureItselfVersion;
    int  _featureName;
    PeoplePredictionDataFeatureValue * _featureValue;
    struct { 
        unsigned int eventVolumeToComputeFeature : 1; 
        unsigned int featureFreshnessInHours : 1; 
        unsigned int featureItselfVersion : 1; 
        unsigned int featureName : 1; 
        unsigned int timeSpentToComputeFeature : 1; 
    }  _has;
    unsigned int  _timeSpentToComputeFeature;
}

@property (nonatomic) unsigned int eventVolumeToComputeFeature;
@property (nonatomic) unsigned int featureFreshnessInHours;
@property (nonatomic) unsigned int featureItselfVersion;
@property (nonatomic) int featureName;
@property (nonatomic, retain) PeoplePredictionDataFeatureValue *featureValue;
@property (nonatomic) bool hasEventVolumeToComputeFeature;
@property (nonatomic) bool hasFeatureFreshnessInHours;
@property (nonatomic) bool hasFeatureItselfVersion;
@property (nonatomic) bool hasFeatureName;
@property (nonatomic, readonly) bool hasFeatureValue;
@property (nonatomic) bool hasTimeSpentToComputeFeature;
@property (nonatomic) unsigned int timeSpentToComputeFeature;

- (void).cxx_destruct;
- (int)StringAsFeatureName:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventVolumeToComputeFeature;
- (unsigned int)featureFreshnessInHours;
- (unsigned int)featureItselfVersion;
- (int)featureName;
- (id)featureNameAsString:(int)arg1;
- (id)featureValue;
- (bool)hasEventVolumeToComputeFeature;
- (bool)hasFeatureFreshnessInHours;
- (bool)hasFeatureItselfVersion;
- (bool)hasFeatureName;
- (bool)hasFeatureValue;
- (bool)hasTimeSpentToComputeFeature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventVolumeToComputeFeature:(unsigned int)arg1;
- (void)setFeatureFreshnessInHours:(unsigned int)arg1;
- (void)setFeatureItselfVersion:(unsigned int)arg1;
- (void)setFeatureName:(int)arg1;
- (void)setFeatureValue:(id)arg1;
- (void)setHasEventVolumeToComputeFeature:(bool)arg1;
- (void)setHasFeatureFreshnessInHours:(bool)arg1;
- (void)setHasFeatureItselfVersion:(bool)arg1;
- (void)setHasFeatureName:(bool)arg1;
- (void)setHasTimeSpentToComputeFeature:(bool)arg1;
- (void)setTimeSpentToComputeFeature:(unsigned int)arg1;
- (unsigned int)timeSpentToComputeFeature;
- (void)writeTo:(id)arg1;

@end
