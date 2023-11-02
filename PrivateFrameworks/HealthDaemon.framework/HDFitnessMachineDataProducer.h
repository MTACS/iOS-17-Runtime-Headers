
@interface HDFitnessMachineDataProducer : NSObject <HDWorkoutDataAccumulatorObserver> {
    HKQuantity * _averageHeartRate;
    bool  _heartRateEnabled;
    _HDFTMProducerMetricTracker * _heartRateTracker;
    HKQuantity * _latestHeartRate;
    HDEurotasData * _previousEurotasData;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _sessionIdentifier;
    HKQuantity * _totalActiveEnergy;
    HKQuantity * _totalBasalEnergy;
}

@property (nonatomic, readonly) bool attached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attachHealthServiceSession:(unsigned long long)arg1;
- (bool)attached;
- (void)dealloc;
- (void)deliverFinalValuesAndDetachWithCompletion:(id /* block */)arg1;
- (void)detachHealthServiceSession;
- (id)initWithProfile:(id)arg1;
- (void)pauseCurrentSession;
- (void)resumeCurrentSession;
- (void)sendInitialValues;
- (void)workoutDataAccumulator:(id)arg1 didUpdateStatistics:(id)arg2;

@end
