
@interface NTKHeartRateQueryManager : NSObject {
    bool  _canUseFutureSamples;
    bool  _checkedDefaults;
    bool  _deviceIsLocked;
    NSObject<OS_dispatch_queue> * _healthQueue;
    HKHealthStore * _healthStore;
    HKAnchoredObjectQuery * _heartRateQuery;
    HKHeartRateSummaryQuery * _heartRateSummaryQuery;
    HKQuantitySample * _latestHeartRateSample;
    HKHeartRateSummary * _latestHeartRateSummary;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSObject<OS_dispatch_queue> * _sampleQueue;
}

@property (nonatomic, readonly) bool canUseFutureSamples;
@property (getter=hasCheckedDefaults, nonatomic) bool checkedDefaults;
@property (nonatomic, retain) HKQuantitySample *latestHeartRateSample;
@property (nonatomic, readonly) HKHeartRateSummary *latestHeartRateSummary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_alreadyObserving;
- (void)_enumerateObserversUsingBlock:(id /* block */)arg1;
- (void)_findLatestHeartRateSample:(id)arg1;
- (void)_handleDeviceLockChange;
- (bool)_haveObservers;
- (id)_init;
- (void)_notifyObserversOfLatestSample;
- (void)_notifyObserversOfLatestSummary;
- (void)_queue_clearHeartRateSampleQueryWithError:(id)arg1;
- (void)_queue_clearHeartRateSummaryQueryWithError:(id)arg1;
- (void)_queue_retrieveLatestHeartRateOnce;
- (void)_queue_startObservingHeartRate;
- (void)_queue_startObservingHeartRateSummary;
- (void)_queue_stopObservingHeartRate;
- (void)_queue_stopObservingHeartRateSummary;
- (void)_startObserving;
- (void)_stopObserving;
- (void)_stopObservingIfNeeded;
- (void)addObserver:(id)arg1;
- (bool)canUseFutureSamples;
- (void)dealloc;
- (bool)hasCheckedDefaults;
- (id)latestHeartRateSample;
- (id)latestHeartRateSummary;
- (void)removeObserver:(id)arg1;
- (void)setCheckedDefaults:(bool)arg1;
- (void)setHeartRateSamples:(id)arg1;
- (void)setLatestHeartRateSample:(id)arg1;
- (void)setLatestHeartRateSummary:(id)arg1;
- (void)startObservingIfNeeded;

@end
