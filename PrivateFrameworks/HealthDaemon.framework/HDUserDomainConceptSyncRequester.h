
@interface HDUserDomainConceptSyncRequester : HDSyncRequester <HDUserDomainConceptObserver> {
    HDUserDomainConceptManager * _userDomainConceptManager;
}

@property (nonatomic, readonly) HDUserDomainConceptManager *userDomainConceptManager;

- (void).cxx_destruct;
- (id)initWithUserDomainConceptManager:(id)arg1;
- (id)userDomainConceptManager;
- (void)userDomainConceptManager:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didJournalUserDomainConcepts:(id)arg2;
- (void)userDomainConceptManager:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
