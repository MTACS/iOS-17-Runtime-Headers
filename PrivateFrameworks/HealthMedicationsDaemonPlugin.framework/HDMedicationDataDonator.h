
@interface HDMedicationDataDonator : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    bool  _donationRequiredOnNextUnlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDHealthMedicationsProfileExtension * _profileExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool donationRequiredOnNextUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkBuilderAndCancelIfErrorForBuilder:(id)arg1 fullStream:(id)arg2;
- (void)_donateActiveConceptsForStream:(id)arg1 activeMedications:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_donateIfUDCListChangedForUDCArray:(id)arg1 manager:(id)arg2;
- (void)_donateWithReason:(id)arg1;
- (id)_findPreferredNameForConcept:(id)arg1;
- (void)_finishStreamingForStream:(id)arg1 completion:(id /* block */)arg2;
- (bool)_medicationUDCHasChangedForUDCArray:(id)arg1;
- (id)_medicationUserDomainConceptsForProfile:(id)arg1 error:(id*)arg2;
- (void)_performDataDonationForProfile:(id)arg1 completion:(id /* block */)arg2;
- (bool)_registerItemForDonationForConcept:(id)arg1 builder:(id)arg2 fullStream:(id)arg3 error:(id*)arg4;
- (bool)_registerItemForStream:(id)arg1 item:(id)arg2 error:(id*)arg3;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)didRecieveThirdPartyMigrationNotification;
- (bool)donationRequiredOnNextUnlock;
- (bool)getDonationRequiredOnNextUnlock;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDonationRequiredOnNextUnlock:(bool)arg1;
- (void)unitTesting_performDataDonationForProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
