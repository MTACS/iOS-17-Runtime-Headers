
@interface HDDataCollector : NSObject <HDHealthDataCollector> {
    double  _collectionInterval;
    HDDeviceEntity * _deviceEntity;
    bool  _disabled;
    long long  _failureRetryCount;
    HKObjectType * _observedType;
    HDPrimaryProfile * _primaryProfile;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDSourceEntity * _sourceEntity;
    long long  _state;
}

@property double collectionInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) HDSourceEntity *sourceEntity;
@property (readonly) Class superclass;

+ (id)_lastReceivedSensorDatumForProfile:(id)arg1;
+ (bool)_primaryContextExistsForDomain:(id)arg1 profile:(id)arg2;
+ (id)_sensorDatumFromContext:(id)arg1;
+ (double)defaultCollectionInterval;
+ (id)domain;
+ (id)observedType;
+ (id)secondaryContextClasses;
+ (Class)sensorDatumClass;

- (void).cxx_destruct;
- (void)_performAsync:(id /* block */)arg1;
- (void)_performSync:(id /* block */)arg1;
- (void)_queue_beginStreaming;
- (double)collectionInterval;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)collectionStoppedForType:(id)arg1;
- (id)dataCollectorDiagnosticDescription;
- (bool)disabled;
- (id)initWithPrimaryProfile:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setDisabled:(bool)arg1;
- (id)sourceEntity;
- (void)stopPerformingUpdatesWithErrorEncountered:(bool)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)updateHistoricalData;
- (void)updateHistoricalDataForcedUpdate:(bool)arg1 completion:(id /* block */)arg2;
- (void)updateHistoricalDataWithCompletion:(id /* block */)arg1;

@end
