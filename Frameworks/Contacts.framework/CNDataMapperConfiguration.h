
@interface CNDataMapperConfiguration : NSObject {
    NSObject<OS_tcc_identity> * _assumedIdentity;
    CNContactsProviderManager * _contactsProviderManager;
    CNContactsEnvironment * _environment;
    long long  _identifierAuditMode;
    bool  _isContactsProvider;
    CNManagedConfiguration * _managedConfiguration;
}

@property (nonatomic, retain) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, retain) CNContactsProviderManager *contactsProviderManager;
@property (nonatomic, retain) CNContactsEnvironment *environment;
@property (nonatomic) long long identifierAuditMode;
@property (nonatomic) bool isContactsProvider;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;

- (void).cxx_destruct;
- (id)assumedIdentity;
- (id)contactsProviderManager;
- (id)description;
- (id)environment;
- (long long)identifierAuditMode;
- (id)initWithContactStoreConfiguration:(id)arg1;
- (bool)isContactsProvider;
- (id)managedConfiguration;
- (void)setAssumedIdentity:(id)arg1;
- (void)setContactsProviderManager:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setIdentifierAuditMode:(long long)arg1;
- (void)setIsContactsProvider:(bool)arg1;
- (void)setManagedConfiguration:(id)arg1;

@end
