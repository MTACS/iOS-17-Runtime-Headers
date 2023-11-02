
@interface CRKASMCredentialHousekeeper : NSObject {
    CRKASMCredentialStore * _credentialStore;
    <CRKASMRoster> * _roster;
}

@property (nonatomic, readonly) CRKASMCredentialStore *credentialStore;
@property (nonatomic, readonly) <CRKASMRoster> *roster;

- (void).cxx_destruct;
- (id)credentialStore;
- (id)entriesInManifest:(id)arg1 forPersistentIDs:(id)arg2;
- (void)housekeep;
- (void)housekeepTrustedUserCertificates;
- (void)housekeepUserIdentities;
- (id)initWithRoster:(id)arg1 credentialStore:(id)arg2;
- (bool)isEntryValid:(id)arg1 allowedUserIdentifiers:(id)arg2;
- (id)knownTrustedUserIdentifiers;
- (id)knownUserIdentifiers;
- (void)removeAllUserIdentitiesInManifest:(id)arg1;
- (void)removeTrustedUserCertificates:(id)arg1 manifest:(id)arg2;
- (void)removeUserIdentities:(id)arg1 manifest:(id)arg2;
- (id)roster;

@end
