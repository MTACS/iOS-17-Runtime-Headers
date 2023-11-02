
@interface REConditionEvaluator : NSObject {
    RECondition * _condition;
    unsigned long long  _mode;
}

@property (nonatomic, readonly) RECondition *condition;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) bool needsPredictionSet;

- (void).cxx_destruct;
- (bool)acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (bool)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2;
- (id)condition;
- (id)initWithCondition:(id)arg1;
- (unsigned long long)mode;
- (bool)needsPredictionSet;

@end
