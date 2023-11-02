
@interface CNManagedConfiguration : NSObject {
    NSString * _bundleIdentifier;
    <CNManagedProfileConnection> * _profileConnection;
    NSString * _providerContainerIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) <CNManagedProfileConnection> *profileConnection;
@property (nonatomic, readonly, copy) NSString *providerContainerIdentifier;

+ (id)os_log;

- (void).cxx_destruct;
- (id)accountForIdentifier:(id)arg1;
- (bool)accountIsManaged:(id)arg1;
- (bool)accountIsManagedForIdentifier:(id)arg1;
- (int)accountManagementForIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (bool)canAccessProviderContainerWithIdentifier:(id)arg1;
- (bool)canReadFromAccountWithIdentifier:(id)arg1;
- (bool)canReadFromLocalAccount;
- (bool)canWriteToAccountWithIdentifier:(id)arg1;
- (bool)canWriteToAccountWithIdentifier:(id)arg1 fromSourceAccountIdentifier:(id)arg2;
- (bool)canWriteToLocalAccount;
- (bool)deviceHasManagementRestrictions;
- (bool)hasContactsProviderRestrictions;
- (id)init;
- (id)initForContactsProvider;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 managedProfileConnection:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (id)profileConnection;
- (id)providerContainerIdentifier;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (void)setProviderContainerIdentifier:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1 sourceAccountManagement:(int)arg2;

@end
