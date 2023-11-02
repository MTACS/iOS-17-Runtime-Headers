
@interface _PSFeatureCache : NSObject {
    NSMutableDictionary * _cache;
    NSArray * _caches;
    NSSet * _candidates;
    _PSPredictionContext * _context;
    _PSShareSheetEphemeralFeatureManager * _ephemeralFeatureManager;
    LCFFeatureStore * _featureStore;
    _PSHistogramFeatureData * _histogramFeatureData;
    unsigned long long  _leeway;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUserDefaults * _psDefaults;
    NSObject<OS_dispatch_queue> * _queue;
    _CDInteractionStore * _store;
    unsigned long long  _timeDelay;
    NSObject<OS_dispatch_source> * _timer;
    BMSource * _virtualFeatureStreamSource;
}

@property (nonatomic, retain) _PSShareSheetEphemeralFeatureManager *ephemeralFeatureManager;

- (void).cxx_destruct;
- (id)addSelfToCandidates:(id)arg1;
- (id)computeEphemeralFeaturesWithCandidates:(id)arg1 context:(id)arg2;
- (id)ephemeralFeatureManager;
- (id)fetchFeaturesWithCandidates:(id)arg1 context:(id)arg2;
- (id)getDeviceIdentifier;
- (id)getFeatureValueForLabeledDataStore:(id)arg1;
- (id)getHistogramFeatureData;
- (id)initWithPredictionContext:(id)arg1 candidates:(id)arg2 caches:(id)arg3 store:(id)arg4;
- (void)invalidateAndRefreshCache;
- (bool)isCacheEmpty;
- (bool)isDurableFeaturesSetAdmissible;
- (id)privacyMitigateFeatures:(id)arg1;
- (void)refreshDurableCachesWithCandidates:(id)arg1;
- (void)replaceEphemeralFeaturesWithCache:(id)arg1;
- (void)saveToVirtualStore;
- (void)setEphemeralFeatureManager:(id)arg1;
- (void)setFeatureValueForFeatureName:(int)arg1 featureValue:(id)arg2 candidate:(id)arg3;
- (void)setPredictionContextWithContext:(id)arg1;

@end
