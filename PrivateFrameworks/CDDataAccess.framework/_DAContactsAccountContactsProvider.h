
@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)accountForContainerWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)contactStore;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;
- (id)initWithContactStore:(id)arg1;

@end
