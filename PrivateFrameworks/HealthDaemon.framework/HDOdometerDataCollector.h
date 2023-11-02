
@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType * _distanceType;
}

- (void).cxx_destruct;
- (bool)canResumeCollectionFromLastSensorDatum;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (id)initWithProfile:(id)arg1 collectedDistanceType:(id)arg2;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1;

@end
