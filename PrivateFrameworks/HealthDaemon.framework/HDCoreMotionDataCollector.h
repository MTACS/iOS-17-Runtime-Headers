
@interface HDCoreMotionDataCollector : NSObject <HDDataCollector, HDDiagnosticObject> {
    <HDCoreMotionDataSource> * _dataSource;
    long long  _errorCount;
    NSMutableDictionary * _lastCMDatumByType;
    HDDataCollectorMultiplexer * _multiplexer;
    HDProfile * _profile;
    NSSet * _quantityTypes;
    NSObject<OS_dispatch_queue> * _queue;
    HDDataCollectorState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessToFitnessDataDidChange:(id)arg1;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)persistentIdentifier;
- (id)profile;
- (id)queue;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (void)queue_recomputeCurrentState;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1;
- (void)registerWithAggregators;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;

@end
