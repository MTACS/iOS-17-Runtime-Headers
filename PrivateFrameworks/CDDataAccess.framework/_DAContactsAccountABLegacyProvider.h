
@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider {
    void * _addressBook;
}

@property (nonatomic, readonly) void*addressBook;

- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)accountForContainerWithIdentifier:(id)arg1;
- (void*)addressBook;
- (id)allAccounts;
- (void)dealloc;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;
- (id)initWithAddressBook:(void*)arg1;

@end
