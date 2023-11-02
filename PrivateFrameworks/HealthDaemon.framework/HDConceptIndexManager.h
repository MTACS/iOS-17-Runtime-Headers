
@interface HDConceptIndexManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver, HDProfileReadyObserver> {
    unsigned long long  _batchSize;
    NSCountedSet * _cachedReasonsForReindex;
    double  _conceptIndexUpdateDebounceIntervalOverride;
    Class  _conceptIndexerClass;
    NSObject<OS_dispatch_queue> * _delayedOperationQueue;
    bool  _hasScheduledIndexing;
    bool  _ignoresAutomaticProcessingTriggers;
    _Atomic bool  _isInvalidated;
    HKObserverSet * _observerSet;
    HDAssertion * _preparedDatabaseAccessibilityAssertion;
    HDProfile * _profile;
    bool  _shouldResetIndexNextExecution;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    id /* block */  _unitTesting_conceptIndexManagerDidFinish;
    id /* block */  _unitTesting_scheduledConceptIndexWorkDidFailAndClearState;
    _HKDelayedOperation * _updateIndexOperation;
}

@property (readonly) unsigned long long currentExecutionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresAutomaticProcessingTriggers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_conceptIndexManagerDidFinish;
@property (nonatomic, copy) id /* block */ unitTesting_scheduledConceptIndexWorkDidFailAndClearState;

- (void).cxx_destruct;
- (void)accountExistenceNotifier:(id)arg1 didChangeHealthRecordAccountExistence:(bool)arg2;
- (void)addObserver:(id)arg1;
- (unsigned long long)currentExecutionState;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (bool)ignoresAutomaticProcessingTriggers;
- (id)init;
- (id)initWithConceptIndexerClass:(Class)arg1 batchSize:(unsigned long long)arg2 profile:(id)arg3;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (void)ontologyDatabase:(id)arg1 didBecomeAvailable:(bool)arg2;
- (void)ontologyShardImporter:(id)arg1 didImportEntry:(id)arg2;
- (bool)performanceTest_triggerConceptIndexing;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetWithReindex;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setIgnoresAutomaticProcessingTriggers:(bool)arg1;
- (void)setUnitTesting_conceptIndexManagerDidFinish:(id /* block */)arg1;
- (void)setUnitTesting_scheduledConceptIndexWorkDidFailAndClearState:(id /* block */)arg1;
- (void)unitTest_debounceUpdateDelayOverride:(double)arg1;
- (bool)unitTest_hasScheduledIndexing;
- (void)unitTest_scheduleUpdateWithDescription:(id)arg1;
- (void)unitTest_setHasScheduledIndexing:(bool)arg1;
- (void)unitTest_triggerConceptIndexing;
- (id /* block */)unitTesting_conceptIndexManagerDidFinish;
- (id /* block */)unitTesting_scheduledConceptIndexWorkDidFailAndClearState;

@end
