
@interface TAStore : NSObject <TAStoreObserver, TAStoreRequestProtocol> {
    NSDate * _clock;
    TADeviceRecord * _deviceRecord;
    TAEventBuffer * _eventBuffer;
    NSDate * _lastLocationDate;
    NSHashTable * _observers;
    TAVisitState * _visitState;
}

@property (nonatomic, readonly) NSDate *clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TADeviceRecord *deviceRecord;
@property (nonatomic, readonly) TAEventBuffer *eventBuffer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TAVisitState *visitState;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addTAEvent:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2;
- (id)clock;
- (id)description;
- (id)deviceRecord;
- (id)eventBuffer;
- (id)fetchTAUnknownBeacon:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEventBufferSettings:(id)arg1 scanRequestSettings:(id)arg2 visitStateSettings:(id)arg3 deviceRecordSettings:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)requestAIS:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)shouldAddTACLVisit:(id)arg1;
- (bool)shouldAddTALocationLite:(id)arg1;
- (bool)shouldAddTASPAdvertisement:(id)arg1;
- (void)updateClock:(id)arg1;
- (id)visitState;
- (void)visitState:(id)arg1 didChangeStateFromType:(unsigned long long)arg2 toType:(unsigned long long)arg3;
- (void)visitState:(id)arg1 didIssueMetricsSubmissionHint:(unsigned long long)arg2;

@end
