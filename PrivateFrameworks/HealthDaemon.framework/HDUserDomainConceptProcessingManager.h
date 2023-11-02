
@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    long long  _batchSize;
    HDAssertion * _databaseAssertion;
    bool  _hasScheduledProcessing;
    bool  _ignoresAutomaticProcessingTriggers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDProfile * _profile;
    double  _scheduledProcessingTimestamp;
    id /* block */  _unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresAutomaticProcessingTriggers;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)ignoresAutomaticProcessingTriggers;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)ontologyDatabase:(id)arg1 didBecomeAvailable:(bool)arg2;
- (void)ontologyShardImporter:(id)arg1 didImportEntry:(id)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setIgnoresAutomaticProcessingTriggers:(bool)arg1;
- (void)setUnitTesting_userDomainConceptProcessingManagerDidFinishProcessing:(id /* block */)arg1;
- (void)unitTesting_overrideDefaultBatchSize:(long long)arg1;
- (void)unitTesting_scheduleUserDomainConceptProcessing;
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (id /* block */)unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
