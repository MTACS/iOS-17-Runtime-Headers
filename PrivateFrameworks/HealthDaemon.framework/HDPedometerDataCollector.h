
@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {
    NSNumber * _userCondition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isPedometerDataCollectionSupported;

- (void).cxx_destruct;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2;

@end
