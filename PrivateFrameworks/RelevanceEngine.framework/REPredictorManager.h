
@interface REPredictorManager : NSObject <REPredictorObserver> {
    RERelevanceEngine * _engine;
    REObserverStore * _observer;
    NSArray * _predictors;
    NSDictionary * _predictorsMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)enumeratePredictors:(id /* block */)arg1;
- (void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3;
- (void)pause;
- (void)predictor:(id)arg1 didBeginActivity:(id)arg2;
- (void)predictor:(id)arg1 didFinishActivity:(id)arg2;
- (void)predictorDidUpdate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resume;

@end
