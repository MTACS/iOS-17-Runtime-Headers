
@interface FidesPHSEvaluatorDataSource : NSObject {
    NSArray * _inputVectors;
    NSDictionary * _recipe;
    NSArray * _recordDatas;
    NSArray * _recordInfos;
    NSArray * _records;
    NSArray * _targetVector;
}

@property (nonatomic, readonly) NSArray *GBDTQuestions;
@property (nonatomic, readonly) bool computeFirstOrderGradients;
@property (nonatomic, readonly) bool computeSecondOrderGradients;
@property (nonatomic, readonly) NSArray *inputVectors;
@property (nonatomic, copy) NSDictionary *recipe;
@property (nonatomic, retain) NSArray *recordDatas;
@property (nonatomic, retain) NSArray *recordInfos;
@property (nonatomic, retain) NSArray *records;
@property (nonatomic, readonly) bool reportGradientsBothSidesOfSplit;
@property (nonatomic, readonly) bool reportNodeSumGradients;
@property (nonatomic, readonly) bool reportPerFeatureResultDifference;
@property (nonatomic, readonly) bool reportPerNodeResultDifference;
@property (nonatomic, readonly) NSArray *targetVector;
@property (nonatomic, readonly) NSArray *translateVector;
@property (nonatomic, readonly) NSArray *weightVector;

+ (id)defaultRecipeParams;
+ (void)initialize;

- (void).cxx_destruct;
- (id)GBDTQuestions;
- (int)batchSize;
- (id)classLearningRates;
- (int)classThreshold;
- (bool)computeFirstOrderGradients;
- (bool)computeSecondOrderGradients;
- (id)freezeComponents;
- (float)gradNormFactor;
- (id)gradNormType;
- (id)initWithRecipe:(id)arg1 inputVectors:(id)arg2 targetVector:(id)arg3 error:(id*)arg4;
- (id)inputSplice;
- (id)inputVectors;
- (float)l2NormBound;
- (id)labelMap;
- (id)layersToTrain;
- (float)learningRate;
- (float)learningRateDecay;
- (int)numLocalIterations;
- (id)objectiveFunction;
- (id)recipe;
- (id)recordDatas;
- (id)recordInfos;
- (id)records;
- (bool)reportGradientsBothSidesOfSplit;
- (bool)reportNodeSumGradients;
- (bool)reportPerFeatureResultDifference;
- (bool)reportPerNodeResultDifference;
- (void)setRecipe:(id)arg1;
- (void)setRecordDatas:(id)arg1;
- (void)setRecordInfos:(id)arg1;
- (void)setRecords:(id)arg1;
- (id)targetVector;
- (id)translateVector;
- (id)weightVector;

@end
