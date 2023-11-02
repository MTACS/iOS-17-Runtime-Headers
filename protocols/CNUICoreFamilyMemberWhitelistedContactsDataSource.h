
@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <NSObject>

@required

- (CNContact *)contactRepresentingItem:(CNUICoreFamilyMemberContactItem *)arg1;
- (NSArray *)familyMemberContactItems;
- (bool)familyMemberContainerIsEmpty;
- (long long)fetchStatus;
- (void)finishWhitelistedContactsTasks;
- (<CNUICoreFamilyMemberContactsObserver> *)observer;
- (void)setObserver:(id <CNUICoreFamilyMemberContactsObserver>)arg1;
- (void)updateWhitelistByAddingContacts:(NSArray *)arg1;
- (void)updateWhitelistByRemovingContacts:(NSArray *)arg1;
- (void)updateWhitelistByUpdatingContacts:(NSArray *)arg1;

@end
