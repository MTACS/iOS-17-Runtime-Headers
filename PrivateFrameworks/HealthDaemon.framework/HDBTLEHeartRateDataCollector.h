
@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector> {
    HDDataCollectorConfiguration * _configuration;
    HKHealthService * _connectedService;
    unsigned long long  _connectedSessionIdentifier;
    NSArray * _oneShotServices;
    NSMutableDictionary * _pendingSessions;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (bool)canResumeCollectionFromLastSensorDatum;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)description;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)startOneShotCollectionForService:(id)arg1;

@end
