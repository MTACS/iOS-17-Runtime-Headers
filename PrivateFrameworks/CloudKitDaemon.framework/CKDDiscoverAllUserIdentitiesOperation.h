
@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation {
    NSMutableDictionary * _contactIdentifiersByLookupInfo;
}

@property (nonatomic, retain) NSMutableDictionary *contactIdentifiersByLookupInfo;

+ (bool)adopterProvidedLookupInfos;

- (void).cxx_destruct;
- (void)_discoverIdentitiesBatched:(id)arg1;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (void)_populateFakeUnitTestLookupInfos:(id)arg1;
- (void)_populateRealUserIdentityLookupInfos;
- (void)_populateUserIdentityLookupInfos;
- (id)contactIdentifiersByLookupInfo;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (void)setContactIdentifiersByLookupInfo:(id)arg1;

@end
