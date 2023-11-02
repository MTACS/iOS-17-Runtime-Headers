
@interface HealthRecordsConceptsSupport.UserDomainConceptChangeProvider : NSObject <HKUserDomainConceptStoreDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _udcChanges;
    void udcStore;
}

- (void).cxx_destruct;
- (id)init;
- (void)userDomainConceptStore:(id)arg1 didAddUserDomainConcepts:(id)arg2;
- (void)userDomainConceptStore:(id)arg1 didDeleteUserDomainConcepts:(id)arg2;
- (void)userDomainConceptStore:(id)arg1 didUpdateUserDomainConcepts:(id)arg2;

@end
