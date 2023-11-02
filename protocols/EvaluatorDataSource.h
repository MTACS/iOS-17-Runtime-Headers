
@protocol EvaluatorDataSource <NSObject>

@required

- (int)batchSize;
- (long long)classificationForRecord:(unsigned long long)arg1;
- (NSData *)dataForRecord:(unsigned long long)arg1;
- (bool)doDummyDataFilter;
- (NSData *)extractFeatureDataForRecord:(unsigned long long)arg1;
- (NSArray *)extractFullFeatureListForRecord:(unsigned long long)arg1;
- (NSString *)freezeComponents;
- (float)gradNormFactor;
- (NSString *)gradNormType;
- (float)l2NormBound;
- (int)labelKeyName;
- (NSArray *)layersToTrain;
- (float)learningRate;
- (float)learningRateDecay;
- (int)minBatchSize;
- (int)minDaemonVersion;
- (int)minsUntil;
- (NSString *)modelFeatures;
- (NSString *)modelInputSchemaInputName;
- (NSString *)modelInputSchemaLabelName;
- (NSString *)modelOutputName;
- (float)negativeSamplingRate;
- (int)numLocalIterations;
- (NSString *)objectiveFunction;
- (unsigned long long)recordCount;
- (bool)useNewTrainingAPI;
- (NSArray *)vectorForClassification:(long long)arg1;

@end
