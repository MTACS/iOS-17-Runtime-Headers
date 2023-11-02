
@interface PHACurareShadowEvaluationEvaluationResult : NSObject {
    bool  _isPositiveData;
    NSNumber * _meanPredictionValue;
    NSString * _modelName;
    NSNumber * _numberOfCorrectSamples;
    NSNumber * _numberOfTotalSamples;
    NSNumber * _stddevPredictionValue;
}

@property bool isPositiveData;
@property (nonatomic, retain) NSNumber *meanPredictionValue;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic, retain) NSNumber *numberOfCorrectSamples;
@property (nonatomic, retain) NSNumber *numberOfTotalSamples;
@property (nonatomic, retain) NSNumber *stddevPredictionValue;

- (void).cxx_destruct;
- (id)initWithModelPath:(id)arg1 isPositiveData:(bool)arg2 numberOfTotalSamples:(id)arg3 numberOfCorrectSamples:(id)arg4 meanPredictionValue:(id)arg5 stddevPredictionValue:(id)arg6;
- (bool)isPositiveData;
- (id)meanPredictionValue;
- (id)modelName;
- (id)numberOfCorrectSamples;
- (id)numberOfTotalSamples;
- (void)setIsPositiveData:(bool)arg1;
- (void)setMeanPredictionValue:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setNumberOfCorrectSamples:(id)arg1;
- (void)setNumberOfTotalSamples:(id)arg1;
- (void)setStddevPredictionValue:(id)arg1;
- (id)stddevPredictionValue;

@end
