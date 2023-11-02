
@interface IRServiceStore : IRStore {
    NSString * _serviceIdentifier;
}

@property (nonatomic, readonly) NSString *serviceIdentifier;

+ (id)fetchAllServicesForClientIdentifier:(id)arg1 persistenceManager:(id)arg2;
+ (id)fetchAllServicesWithPersistenceManager:(id)arg1;
+ (id)fetchLatestServiceWithPersistenceManager:(id)arg1 forClientIdentifier:(id)arg2;
+ (id)generateLogForServicesDatabaseWithPersistenceManager:(id)arg1;
+ (id)generateLogForStringNumEntitiesInDatabaseWithPersistenceManager:(id)arg1;
+ (void)idendifyAndDeleteDuplicateServicesWithWithPersistenceManager:(id)arg1;

- (void).cxx_destruct;
- (bool)_cleanupCandidatesWithDate:(id)arg1;
- (bool)_cleanupHistoryEventsWithDate:(id)arg1;
- (bool)_cleanupNotValidForPredictionCandidates;
- (bool)_cleanupPredictionEventsInDateInterval:(id)arg1;
- (bool)_cleanupReplayEventsWithDate:(id)arg1;
- (bool)_cleanupTrashedHistoryEvents;
- (bool)addCandidates:(id)arg1;
- (bool)addHistoryEvent:(id)arg1 withLimit:(unsigned long long)arg2;
- (bool)addReplayEvents:(id)arg1 withLimit:(unsigned long long)arg2;
- (bool)addService:(id)arg1;
- (bool)cleanupWithDate:(id)arg1 dateIntervalOfMiLoPredictionsToDiscard:(id)arg2;
- (bool)deleteCandidates:(id)arg1;
- (bool)deleteService;
- (id)fetchCandidatesContainer;
- (id)fetchHistoryEventsContainerWithLimit:(unsigned long long)arg1;
- (id)fetchMiLoServiceUuid;
- (id)fetchReplayEventAtDate:(id)arg1;
- (id)fetchReplayEventsContainer;
- (id)fetchService;
- (id)fetchStatistics;
- (id)getReplayEventDescriptors;
- (id)initWithPersistenceManager:(id)arg1 serviceIdentifier:(id)arg2;
- (bool)injectStatisticsRelationship;
- (id)serviceIdentifier;
- (bool)updateCandidate:(id)arg1;
- (bool)updateMiloServiceWithMiloUuidString:(id)arg1;
- (bool)updateService:(id)arg1;
- (bool)updateStatistics:(id)arg1;

@end
