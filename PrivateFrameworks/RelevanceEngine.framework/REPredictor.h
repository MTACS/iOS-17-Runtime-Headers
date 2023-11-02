
@interface REPredictor : REObservableSingleton <REPredictorProperties> {
    bool  __isRunning;
    NSCountedSet * _activities;
    long long  _beginUpdatesCount;
    REObserverStore * _engines;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _predictorLock;
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextScheduler * _refreshScheduler;
}

@property (setter=_setIsRunning:) bool _isRunning;
@property (nonatomic) long long beginUpdatesCount;
@property (nonatomic, readonly) NSCountedSet *outstandingActivities;
@property (nonatomic, readonly) bool running;

+ (id)availablePredictors;
+ (id)supportedFeatures;
+ (id)systemPredictorsSupportingFeatureSet:(id)arg1 relevanceEngine:(id)arg2;
+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isRunning;
- (void)_performUpdate;
- (void)_setIsRunning:(bool)arg1;
- (void)_setRunning:(bool)arg1;
- (void)addRelevanceEngine:(id)arg1;
- (void)beginActivity:(id)arg1;
- (void)beginFetchingData;
- (void)beginUpdates;
- (long long)beginUpdatesCount;
- (void)dealloc;
- (id)description;
- (void)endUpdates;
- (id)engines;
- (void)enumerateInflectionFeatureValues:(id /* block */)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)finishActivity:(id)arg1;
- (void)finishFetchingData;
- (void)invalidate;
- (bool)isRunning;
- (void)onQueue:(id /* block */)arg1;
- (void)onQueueSync:(id /* block */)arg1;
- (id)outstandingActivities;
- (void)pause;
- (id)queue;
- (void)removeRelevanceEngine:(id)arg1;
- (void)resume;
- (bool)running;
- (void)setBeginUpdatesCount:(long long)arg1;
- (void)update;
- (void)updateObservers;

@end
