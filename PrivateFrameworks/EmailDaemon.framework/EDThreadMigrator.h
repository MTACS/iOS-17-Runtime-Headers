
@interface EDThreadMigrator : NSObject <EFLoggable> {
    <EDThreadMigratorDelegate> * _delegate;
    EDInMemoryThreadQueryHandler * _queryHandler;
    EFLocked * _state;
    double  _threadFinalizationInterval;
    EDThreadPersistence * _threadPersistence;
    EMThreadScope * _threadScope;
    <EFScheduler> * _workScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EDThreadMigratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDInMemoryThreadQueryHandler *queryHandler;
@property (nonatomic, readonly) EFLocked *state;
@property (readonly) Class superclass;
@property (nonatomic) double threadFinalizationInterval;
@property (nonatomic, readonly) EDThreadPersistence *threadPersistence;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) <EFScheduler> *workScheduler;

+ (id)log;

- (void).cxx_destruct;
- (void)_failMigration;
- (void)_finishMigrating;
- (void)_migrateNextBatchWithGeneration:(unsigned long long)arg1;
- (void)_scheduleFinalizationForBatchedObjectIDs:(id)arg1 withGeneration:(unsigned long long)arg2 forDelete:(bool)arg3;
- (void)addObjectIDsToMigrate:(id)arg1;
- (void)cancel;
- (void)changeObjectIDsToMigrate:(id)arg1;
- (id)delegate;
- (void)deleteObjectIDsToMigrate:(id)arg1;
- (id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4;
- (id)queryHandler;
- (void)reset;
- (void)setThreadFinalizationInterval:(double)arg1;
- (void)start;
- (id)state;
- (double)threadFinalizationInterval;
- (id)threadPersistence;
- (id)threadScope;
- (id)workScheduler;

@end
