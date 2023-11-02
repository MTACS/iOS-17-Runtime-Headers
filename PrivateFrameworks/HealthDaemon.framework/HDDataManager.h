
@interface HDDataManager : NSObject <HDDiagnosticObject> {
    NSNumber * _lastAnchor;
    double  _lastNotifyLogTime;
    bool  _needsSynchronousNotification;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    long long  _notifyCount;
    NSMutableDictionary * _observersByDataType;
    unsigned long long  _openTransactions;
    NSMutableDictionary * _pendingObjectsBySampleType;
    HDProfile * _profile;
    HDQuantitySeriesManager * _quantitySeriesManager;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _samplesAddedCount;
    long long  _samplesJournaledCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _synchronousObserverLock;
    NSMutableDictionary * _synchronousObserversBySampleType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDQuantitySeriesManager *quantitySeriesManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forDataType:(id)arg2;
- (void)addObserverForAllTypes:(id)arg1;
- (void)addSynchronousObserver:(id)arg1 forSampleType:(id)arg2;
- (bool)associateObjectUUIDs:(id)arg1 objectUUID:(id)arg2 error:(id*)arg3;
- (void)closeObserverTransaction;
- (bool)containsDataObject:(id)arg1;
- (bool)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(bool)arg3 recursiveDeleteAuthorizationBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)deleteDataObjectsOfClass:(Class)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long*)arg4 notifyObservers:(bool)arg5 generateDeletedObjects:(bool)arg6 recursiveDeleteAuthorizationBlock:(id /* block */)arg7 error:(id*)arg8;
- (bool)deleteDataObjectsOfClass:(Class)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long*)arg4 notifyObservers:(bool)arg5 generateDeletedObjects:(bool)arg6 userRequested:(bool)arg7 recursiveDeleteAuthorizationBlock:(id /* block */)arg8 error:(id*)arg9;
- (bool)deleteObjectsWithUUIDCollection:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (bool)deleteSamplesWithSourceEntities:(id)arg1 error:(id*)arg2;
- (bool)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 userRequested:(bool)arg3 recursiveDeleteAuthorizationBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)deleteSamplesWithUUIDs:(id)arg1 generateDeletedObjects:(bool)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)deleteSamplesWithUUIDs:(id)arg1 userRequested:(bool)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (id)diagnosticDescription;
- (long long)hasSampleWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (bool)insertDataObjects:(id)arg1 error:(id*)arg2;
- (bool)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id*)arg6;
- (bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id*)arg4;
- (bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(bool)arg4 error:(id*)arg5;
- (bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(bool)arg4 updateSourceOrder:(bool)arg5 resolveAssociations:(bool)arg6 error:(id*)arg7;
- (void)openObserverTransaction;
- (id)quantitySeriesManager;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2;
- (void)removeObserverForAllTypes:(id)arg1;
- (void)removeSynchronousObserver:(id)arg1 forSampleType:(id)arg2;
- (void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(long long)arg3 appSDKVersion:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)shouldNotifyForDataObjects:(id)arg1 provenance:(id)arg2 database:(id)arg3 anchor:(id)arg4;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)arg1 intervals:(id)arg2 userRequested:(bool)arg3 transaction:(id)arg4 anchor:(id)arg5;
- (void)synchronouslyCloseObserverTransactionAndNotify;

@end
