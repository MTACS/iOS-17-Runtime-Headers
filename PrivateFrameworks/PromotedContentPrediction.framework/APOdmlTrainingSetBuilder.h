
@interface APOdmlTrainingSetBuilder : NSObject {
    NSMutableSet * _adLevelRequiredFeatures;
    NSMutableSet * _deviceAndSearchLevelRequiredFeatures;
    unsigned long long  _placementType;
    APOdmlRecipe * _recipe;
    NSArray * _recordDictionaries;
    NSArray * _recordIDs;
    NSArray * _recordMetadatas;
    unsigned long long  _trainingSetCount;
}

@property (nonatomic, readonly, copy) NSMutableSet *adLevelRequiredFeatures;
@property (nonatomic, readonly, copy) NSMutableSet *deviceAndSearchLevelRequiredFeatures;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, readonly) APOdmlRecipe *recipe;
@property (nonatomic, readonly, copy) NSArray *recordDictionaries;
@property (nonatomic, readonly, copy) NSArray *recordIDs;
@property (nonatomic, readonly, copy) NSArray *recordMetadatas;
@property (nonatomic, readonly) unsigned long long trainingSetCount;

+ (id)classesForDataDict;

- (void).cxx_destruct;
- (id)_additionalMetricsFromAdRecord:(id)arg1 clientPttr:(id)arg2 error:(id*)arg3;
- (bool)_extractFeaturesFromDataBlob:(id)arg1 featuresRequired:(id)arg2 andSaveTo:(id)arg3 error:(id*)arg4;
- (id)_gatherFeaturesFromAdRecord:(id)arg1 requiredFeatures:(id)arg2 forMetricsOnly:(bool)arg3 error:(id*)arg4;
- (void)_preprocessDESRecordSet:(id)arg1 andAddMetadataTo:(id)arg2 addUnarchivedDataTo:(id)arg3 addRecordIDsTo:(id)arg4;
- (id)_trainingRowsFromDESRecord:(id)arg1 isCounterfactual:(id)arg2 error:(id*)arg3;
- (id)adLevelRequiredFeatures;
- (void)addRequiredFeatures:(id)arg1;
- (id)deviceAndSearchLevelRequiredFeatures;
- (id)generateTrainingSet:(id*)arg1;
- (id)initWithDESRecordSet:(id)arg1 recipe:(id)arg2;
- (id)initWithRecipe:(id)arg1;
- (id)initWithRecipe:(id)arg1 recordDictionaries:(id)arg2 recordMetadatas:(id)arg3 recordIDs:(id)arg4;
- (id)metricsFromDESRecordWithClientPttr:(id)arg1 error:(id*)arg2;
- (unsigned long long)placementType;
- (id)recipe;
- (id)recordDictionaries;
- (id)recordIDs;
- (id)recordMetadatas;
- (bool)setError:(id*)arg1 errorCode:(long long)arg2;
- (bool)setErrorPtr:(id*)arg1 toError:(id)arg2;
- (unsigned long long)trainingSetCount;
- (id)translateFeatureKeyToDESKey:(id)arg1;

@end
