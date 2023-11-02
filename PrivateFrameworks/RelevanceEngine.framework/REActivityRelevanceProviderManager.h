
@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REActivityRelevanceProviderManagerProperties, REPredictorObserver> {
    float  _activeEnergy;
    float  _exerciseTime;
    float  _standHour;
}

@property (nonatomic, readonly) float activeEnergy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float exerciseTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float standHour;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (float)activeEnergy;
- (float)exerciseTime;
- (id)initWithQueue:(id)arg1;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)resume;
- (float)standHour;

@end
