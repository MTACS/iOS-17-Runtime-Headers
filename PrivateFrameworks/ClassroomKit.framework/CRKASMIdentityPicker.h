
@interface CRKASMIdentityPicker : NSObject {
    CRKASMCredentialStore * _credentialStore;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly) CRKASMCredentialStore *credentialStore;
@property (nonatomic, readonly) <CRKIdentity> *identity;
@property (nonatomic, readonly, copy) NSString *userIdentifier;

- (void).cxx_destruct;
- (id)arrayBySortingPersistentIDs:(id)arg1;
- (id)candidatePersistentIDsInManifest:(id)arg1;
- (id)credentialStore;
- (id)identity;
- (id)initWithCredentialStore:(id)arg1 userIdentifier:(id)arg2;
- (bool)isManifestEntryValid:(id)arg1 manifest:(id)arg2;
- (id)manifest;
- (id)pickIdentityFromCandidates:(id)arg1 manifest:(id)arg2;
- (id)pickIdentityFromOrderedCandidates:(id)arg1 manifest:(id)arg2;
- (id)userIdentifier;

@end
