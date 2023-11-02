
@interface LCFProactivePredictionRankerHolder : NSObject {
    LCFFeatureSet * _featureSet;
    <MLFeatureProvider> * _prediction;
}

@property (nonatomic, readonly) LCFFeatureSet *featureSet;
@property (nonatomic, readonly) <MLFeatureProvider> *prediction;

- (void).cxx_destruct;
- (id)featureSet;
- (id)init:(id)arg1 prediction:(id)arg2;
- (id)prediction;

@end
