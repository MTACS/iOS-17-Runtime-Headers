
@interface LCFELShadowEvaluationPrediction : NSObject {
    NSNumber * _predictedClass;
    NSNumber * _probablity;
    NSDate * _timestampOfInputFeatureSet;
}

@property (nonatomic, readonly) NSNumber *predictedClass;
@property (nonatomic, readonly) NSNumber *probablity;
@property (nonatomic, readonly) NSDate *timestampOfInputFeatureSet;

- (void).cxx_destruct;
- (id)init:(id)arg1 predictedFeatureSet:(id)arg2 outputLabelFeaturName:(id)arg3;
- (id)predictedClass;
- (id)probablity;
- (id)timestampOfInputFeatureSet;

@end
