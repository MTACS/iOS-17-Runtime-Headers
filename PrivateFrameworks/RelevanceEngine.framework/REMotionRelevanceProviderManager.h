
@interface REMotionRelevanceProviderManager : RERelevanceProviderManager <REMotionRelevanceProviderManagerProperties, REPredictorObserver> {
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long motionType;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)motionType;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)resume;

@end
