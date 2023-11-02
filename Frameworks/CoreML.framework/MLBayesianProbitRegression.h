
@interface MLBayesianProbitRegression : MLRegressor <MLModelSpecificationLoader, MLModelSpecificationSaver, MLSupervisedOnlineUpdatable> {
    NSString * _meanOutputFeatureName;
    struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> { 
        struct BayesianProbitRegression {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
    NSString * _optimismInputFeatureName;
    NSString * _pessimisticProbabilityOutputFeatureName;
    NSString * _regressionInputFeatureName;
    NSString * _sampledProbabilityOutputFeatureName;
    NSString * _samplingScaleInputFeatureName;
    NSString * _samplingTruncationInputFeatureName;
    NSString * _varianceOutputFeatureName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (bool)setFeatureName:(id*)arg1 to:(id)arg2 descriptions:(id)arg3;
+ (bool)validateModelDescription:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)FeatureCount;
- (bool)convertOutputFeatureToPredictionValues:(id)arg1 event:(bool*)arg2 importance:(double*)arg3 error:(id*)arg4;
- (void)createCheckpoint;
- (id)createRegressorResult:(struct Prediction { double x1; double x2; double x3; double x4; double x5; bool x6; }*)arg1;
- (id)getArrayFeatureValue:(id)arg1;
- (double)getFeatureValue:(id)arg1 forName:(id)arg2 withType:(long long)arg3;
- (struct shared_ptr<CoreML::BayesianProbitRegression::FeatureValues> { struct FeatureValues {} *x1; struct __shared_weak_count {} *x2; })getOneHotFeatureValues:(id)arg1 error:(id*)arg2;
- (double)getOptimism:(id)arg1;
- (double)getSamplingScale:(id)arg1;
- (double)getSamplingTruncation:(id)arg1;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3;
- (id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3 regressionInputName:(id)arg4 optimismInputName:(id)arg5 samplingScaleInputName:(id)arg6 samplingTruncationInputName:(id)arg7 meanOutputName:(id)arg8 varianceOutputName:(id)arg9 pessimisticProbabilityOutputName:(id)arg10 sampledProbabilityOutputName:(id)arg11;
- (id)initWithSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBopr:(id)arg1;
- (struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> { struct BayesianProbitRegression {} *x1; struct __shared_weak_count {} *x2; })model;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)reset;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (void*)saveModelToSpecification:(id*)arg1;
- (bool)setFeatureCount:(unsigned long long)arg1;
- (bool)setInputFeatureName:(id*)arg1 to:(id)arg2;
- (bool)setOutputFeatureName:(id*)arg1 to:(id)arg2;
- (bool)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 error:(id*)arg3;
- (bool)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
