
@interface BMMLSEVirtualFeatureStoreFeature : BMEventBase <BMStoreData> {
    unsigned int  _eventVolumeToComputeFeature;
    unsigned int  _featureFreshnessInHours;
    unsigned int  _featureItselfVersion;
    int  _featureName;
    BMMLSEVirtualFeatureStoreFeatureFeatureValue * _featureValue;
    bool  _hasEventVolumeToComputeFeature;
    bool  _hasFeatureFreshnessInHours;
    bool  _hasFeatureItselfVersion;
    bool  _hasTimeSpentToComputeFeature;
    unsigned int  _timeSpentToComputeFeature;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int eventVolumeToComputeFeature;
@property (nonatomic, readonly) unsigned int featureFreshnessInHours;
@property (nonatomic, readonly) unsigned int featureItselfVersion;
@property (nonatomic, readonly) int featureName;
@property (nonatomic, readonly) BMMLSEVirtualFeatureStoreFeatureFeatureValue *featureValue;
@property (nonatomic) bool hasEventVolumeToComputeFeature;
@property (nonatomic) bool hasFeatureFreshnessInHours;
@property (nonatomic) bool hasFeatureItselfVersion;
@property (nonatomic) bool hasTimeSpentToComputeFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int timeSpentToComputeFeature;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)eventVolumeToComputeFeature;
- (unsigned int)featureFreshnessInHours;
- (unsigned int)featureItselfVersion;
- (int)featureName;
- (id)featureValue;
- (bool)hasEventVolumeToComputeFeature;
- (bool)hasFeatureFreshnessInHours;
- (bool)hasFeatureItselfVersion;
- (bool)hasTimeSpentToComputeFeature;
- (id)initByReadFrom:(id)arg1;
- (id)initWithFeatureName:(int)arg1 featureValue:(id)arg2;
- (id)initWithFeatureName:(int)arg1 featureValue:(id)arg2 featureItselfVersion:(id)arg3 featureFreshnessInHours:(id)arg4 eventVolumeToComputeFeature:(id)arg5 timeSpentToComputeFeature:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasEventVolumeToComputeFeature:(bool)arg1;
- (void)setHasFeatureFreshnessInHours:(bool)arg1;
- (void)setHasFeatureItselfVersion:(bool)arg1;
- (void)setHasTimeSpentToComputeFeature:(bool)arg1;
- (unsigned int)timeSpentToComputeFeature;
- (void)writeTo:(id)arg1;

@end
