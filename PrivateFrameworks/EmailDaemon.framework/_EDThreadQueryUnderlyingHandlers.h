
@interface _EDThreadQueryUnderlyingHandlers : NSObject {
    EMObjectID * _inMemoryObservationID;
    EDInMemoryThreadQueryHandler * _inMemoryQueryHandler;
    EMObjectID * _precomputedObservationID;
    EDPrecomputedThreadQueryHandler * _precomputedQueryHandler;
    EDThreadMigrator * _threadMigrator;
}

@property (nonatomic, retain) EMObjectID *inMemoryObservationID;
@property (nonatomic, retain) EDInMemoryThreadQueryHandler *inMemoryQueryHandler;
@property (nonatomic, retain) EMObjectID *precomputedObservationID;
@property (nonatomic, retain) EDPrecomputedThreadQueryHandler *precomputedQueryHandler;
@property (nonatomic, retain) EDThreadMigrator *threadMigrator;

- (void).cxx_destruct;
- (bool)_isCurrentObservationToken:(id)arg1;
- (id)inMemoryObservationID;
- (id)inMemoryQueryHandler;
- (id)precomputedObservationID;
- (id)precomputedQueryHandler;
- (void)setInMemoryObservationID:(id)arg1;
- (void)setInMemoryQueryHandler:(id)arg1;
- (void)setPrecomputedObservationID:(id)arg1;
- (void)setPrecomputedQueryHandler:(id)arg1;
- (void)setThreadMigrator:(id)arg1;
- (id)threadMigrator;

@end
