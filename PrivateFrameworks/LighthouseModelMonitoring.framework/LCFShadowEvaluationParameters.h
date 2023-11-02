
@interface LCFShadowEvaluationParameters : NSObject {
    NSString * _destLabelName;
    NSDate * _endDate;
    NSArray * _featureNames;
    NSString * _groundTruthLabelFeatureName;
    id /* block */  _inferenceHandler;
    id /* block */  _metricsHandler;
    NSArray * _modelNames;
    NSString * _predictedLabelFeatureName;
    id /* block */  _preprocessHandler;
    NSString * _srcLabelName;
    NSDate * _startDate;
    NSString * _vectorFeatureName;
}

@property (nonatomic, readonly) NSString *destLabelName;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) NSString *groundTruthLabelFeatureName;
@property (nonatomic, readonly) id /* block */ inferenceHandler;
@property (nonatomic, readonly) id /* block */ metricsHandler;
@property (nonatomic, readonly) NSArray *modelNames;
@property (nonatomic, readonly) NSString *predictedLabelFeatureName;
@property (nonatomic, readonly) id /* block */ preprocessHandler;
@property (nonatomic, readonly) NSString *srcLabelName;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *vectorFeatureName;

- (void).cxx_destruct;
- (id)destLabelName;
- (id)endDate;
- (id)featureNames;
- (id)groundTruthLabelFeatureName;
- (id /* block */)inferenceHandler;
- (id)init:(id)arg1 featureNames:(id)arg2 vectorFeatureName:(id)arg3 srcLabelName:(id)arg4 destLabelName:(id)arg5 startDate:(id)arg6 endDate:(id)arg7;
- (id)init:(id)arg1 featureNames:(id)arg2 vectorFeatureName:(id)arg3 srcLabelName:(id)arg4 destLabelName:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 preprocessHandler:(id /* block */)arg8 inferenceHandler:(id /* block */)arg9 metricsHandler:(id /* block */)arg10 groundTruthLabelFeatureName:(id)arg11 predictedLabelFeatureName:(id)arg12;
- (id /* block */)metricsHandler;
- (id)modelNames;
- (id)predictedLabelFeatureName;
- (id /* block */)preprocessHandler;
- (id)srcLabelName;
- (id)startDate;
- (id)vectorFeatureName;

@end
