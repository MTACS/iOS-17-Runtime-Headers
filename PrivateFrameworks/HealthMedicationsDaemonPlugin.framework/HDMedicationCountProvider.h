
@interface HDMedicationCountProvider : NSObject <HDMedicationCountProvider, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    HDDaemon * _daemon;
    NSMapTable * _isProfileReadyByProfile;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKObserverSet<HDMedicationCountObserver> * _observers;
    NSMapTable * _ontologyBackedMedicationCountByProfile;
}

@property (nonatomic, readonly) HDDaemon *daemon;

- (void).cxx_destruct;
- (void)addMedicationCountObserver:(id)arg1 queue:(id)arg2;
- (id)daemon;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)monitorMedicationCountsInProfile:(id)arg1;
- (long long)ontologyBackedMedicationCountInProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)removeMedicationCountObserver:(id)arg1;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
