
@interface HDOntologyDatabase : NSObject <HDOntologyBackingStoreObserver> {
    HKObserverSet * _databaseAvailableObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
    HDOntologyBackingStore * _unitTesting_ontologyBackingStore;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDOntologyBackingStore *unitTesting_ontologyBackingStore;

+ (id)ontologyContentVersionWithTransaction:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addOntologyDatabaseAvailabilityObserver:(id)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (bool)isAvailable;
- (void)ontologyBackingStore:(id)arg1 didBecomeAvailable:(bool)arg2;
- (id)ontologyContentVersionWithError:(id*)arg1;
- (bool)performTransactionWithDatabaseTransaction:(id)arg1 error:(id*)arg2 transactionHandler:(id /* block */)arg3;
- (bool)performTransactionWithError:(id*)arg1 transactionHandler:(id /* block */)arg2;
- (id)profile;
- (void)removeOntologyDatabaseAvailabilityObserver:(id)arg1;
- (void)setUnitTesting_ontologyBackingStore:(id)arg1;
- (void)unitTesting_close;
- (id)unitTesting_ontologyBackingStore;
- (bool)unitTesting_performWriteTransactionWithError:(id*)arg1 transactionHandler:(id /* block */)arg2;
- (id)unitTesting_schemaVersionWithError:(id*)arg1;

@end
