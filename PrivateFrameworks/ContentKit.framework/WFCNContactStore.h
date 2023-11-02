
@interface WFCNContactStore : WFContactStore {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (bool)addContact:(id)arg1 error:(id*)arg2;
- (id)allContactsWithSortOrder:(long long)arg1;
- (id)allContactsWithSortOrder:(long long)arg1 passingTest:(id /* block */)arg2;
- (id)contactStore;
- (id)contactWithIdentifier:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)contactsWithName:(id)arg1;
- (id)contactsWithName:(id)arg1 keysToFetch:(id)arg2;
- (id)firstContactWithEmailAddress:(id)arg1;
- (id)firstContactWithPhoneNumber:(id)arg1;
- (id)firstContactWithPredicate:(id)arg1 propertyID:(int)arg2 valueEqualityBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithContactStore:(id)arg1;

@end
