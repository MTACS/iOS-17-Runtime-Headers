
@interface DAContactsAccountProvider : NSObject

+ (id)providerWithAddressBook:(void*)arg1;
+ (id)providerWithContactStore:(id)arg1;

- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;
- (id)accountForContainerWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;

@end
