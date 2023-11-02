
@protocol HKUserDomainConceptStoreDelegate <NSObject>

@required

- (void)userDomainConceptStore:(HKUserDomainConceptStore *)arg1 didAddUserDomainConcepts:(NSArray *)arg2;
- (void)userDomainConceptStore:(HKUserDomainConceptStore *)arg1 didDeleteUserDomainConcepts:(NSArray *)arg2;
- (void)userDomainConceptStore:(HKUserDomainConceptStore *)arg1 didUpdateUserDomainConcepts:(NSArray *)arg2;

@end
