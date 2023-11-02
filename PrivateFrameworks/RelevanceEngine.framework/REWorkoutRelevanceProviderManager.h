
@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties> {
    NSDate * _lastWorkoutDate;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (void).cxx_destruct;
- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)resume;
- (unsigned long long)state;

@end
