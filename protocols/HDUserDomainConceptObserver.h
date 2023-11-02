
@protocol HDUserDomainConceptObserver

@required

- (void)userDomainConceptManager:(HDUserDomainConceptManager *)arg1 didAddUserDomainConcepts:(NSArray *)arg2;
- (void)userDomainConceptManager:(HDUserDomainConceptManager *)arg1 didDeleteUserDomainConcepts:(NSArray *)arg2;
- (void)userDomainConceptManager:(HDUserDomainConceptManager *)arg1 didJournalUserDomainConcepts:(NSArray *)arg2;
- (void)userDomainConceptManager:(HDUserDomainConceptManager *)arg1 didUpdateUserDomainConcepts:(NSArray *)arg2;

@end
