
@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector, HDMetricsCollector> {
    NSMapTable * _aggregators;
    NSDate * _approximatedStartDate;
    NSMutableArray * _bufferedCharacteristics;
    NSMutableDictionary * _bufferedMetrics;
    CMFitnessMachine * _cmFitnessMachine;
    HDDataCollectorConfiguration * _configuration;
    HKDevice * _device;
    unsigned long long  _fitnessMachineType;
    NSDate * _lastDatumsDate;
    NSSet * _localDevicePreferredObjectTypes;
    NSString * _machineBrand;
    NSDate * _machinePreferredUntilDate;
    HKObserverSet * _metricsCollectorObservers;
    NSMutableDictionary * _previousDatums;
    NSMutableDictionary * _previousWorkoutMetrics;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKSource * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *machinePreferredUntilDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)handleDataCharacteristic:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithFitnessMachineType:(unsigned long long)arg1 profile:(id)arg2;
- (id)machinePreferredUntilDate;
- (double)preferredAggregationIntervalForAggregator:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setMachineBrand:(id)arg1;
- (void)setMachinePreferredUntilDate:(id)arg1;
- (void)setMachineStartDate:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)tearDown;
- (void)unitTest_processDatumsByMetric:(id)arg1;

@end
