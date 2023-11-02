
@protocol CNUICoreFamilyMemberContactsDataSource <NSObject>

@required

- (NSNumber *)countOfFamilyMemberContacts;
- (long long)fetchStatus;
- (<CNUICoreFamilyMemberContactsObserver> *)observer;
- (void)setObserver:(id <CNUICoreFamilyMemberContactsObserver>)arg1;
- (void)updateListByAddingContacts:(NSArray *)arg1;
- (void)updateListByRemovingContacts:(NSArray *)arg1;

@end
