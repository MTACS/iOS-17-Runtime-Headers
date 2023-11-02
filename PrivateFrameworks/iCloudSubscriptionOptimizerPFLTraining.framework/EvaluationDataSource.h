
@interface EvaluationDataSource : NSObject <EvaluatorDataSource> {
    NSDictionary * _recipe;
    NSArray * _recordDatas;
    NSArray * _recordInfos;
    NSArray * _records;
}

@property (nonatomic, readonly) int batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool doDummyDataFilter;
@property (nonatomic, readonly) NSString *freezeComponents;
@property (nonatomic, readonly) float gradNormFactor;
@property (nonatomic, readonly) NSString *gradNormType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float l2NormBound;
@property (nonatomic, readonly) int labelKeyName;
@property (nonatomic, readonly) NSArray *layersToTrain;
@property (nonatomic, readonly) float learningRate;
@property (nonatomic, readonly) float learningRateDecay;
@property (nonatomic, readonly) int minBatchSize;
@property (nonatomic, readonly) int minDaemonVersion;
@property (nonatomic, readonly) int minsUntil;
@property (nonatomic, readonly) NSString *modelFeatures;
@property (nonatomic, readonly) NSString *modelInputSchemaInputName;
@property (nonatomic, readonly) NSString *modelInputSchemaLabelName;
@property (nonatomic, readonly) NSString *modelOutputName;
@property (nonatomic, readonly) float negativeSamplingRate;
@property (nonatomic, readonly) int numLocalIterations;
@property (nonatomic, readonly) NSString *objectiveFunction;
@property (nonatomic, copy) NSDictionary *recipe;
@property (nonatomic, retain) NSArray *recordDatas;
@property (nonatomic, retain) NSArray *recordInfos;
@property (nonatomic, retain) NSArray *records;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useNewTrainingAPI;

+ (id)defaultRecipeParams;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)allNegativeSamples;
- (int)batchSize;
- (long long)classificationForRecord:(unsigned long long)arg1;
- (id)dataForRecord:(unsigned long long)arg1;
- (bool)doDummyDataFilter;
- (id)extractFeatureDataForRecord:(unsigned long long)arg1;
- (id)extractFullFeatureListForRecord:(unsigned long long)arg1;
- (void)filterInMatchedLabelData:(id)arg1;
- (void)filteringOperation;
- (void)filteroutDummyData;
- (id)freezeComponents;
- (id)getRecordInfo:(unsigned long long)arg1;
- (float)gradNormFactor;
- (id)gradNormType;
- (id)initWithRecipe:(id)arg1 infos:(id)arg2 datas:(id)arg3 error:(id*)arg4;
- (float)l2NormBound;
- (int)labelKeyName;
- (id)layersToTrain;
- (float)learningRate;
- (float)learningRateDecay;
- (int)minBatchSize;
- (int)minDaemonVersion;
- (int)minsUntil;
- (id)modelFeatures;
- (id)modelInputSchemaInputName;
- (id)modelInputSchemaLabelName;
- (id)modelOutputName;
- (float)negativeSamplingRate;
- (int)numLocalIterations;
- (id)objectiveFunction;
- (void)performDownSampling;
- (id)recipe;
- (unsigned long long)recordCount;
- (id)recordDatas;
- (id)recordInfos;
- (id)records;
- (void)selectDaemonVersion:(int)arg1;
- (void)setRecipe:(id)arg1;
- (void)setRecordDatas:(id)arg1;
- (void)setRecordInfos:(id)arg1;
- (void)setRecords:(id)arg1;
- (bool)useNewTrainingAPI;
- (void)validateRecordInfo:(id)arg1;
- (id)vectorForClassification:(long long)arg1;

@end
