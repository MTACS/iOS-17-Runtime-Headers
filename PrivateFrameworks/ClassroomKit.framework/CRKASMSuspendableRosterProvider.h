
@interface CRKASMSuspendableRosterProvider : NSObject <CRKASMRosterProviding, CRKASMUserDirectory, CRKASMUserDirectoryIterator, CRKASMUserFetching> {
    id /* block */  _generator;
    NSArray * _locationsWithManagePermissions;
    bool  _populated;
    <CRKASMRoster> * _roster;
    NSObject<CRKASMRosterProviding> * _underlyingRosterProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *locationsWithManagePermissions;
@property (getter=isPopulated, nonatomic) bool populated;
@property (nonatomic, retain) <CRKASMRoster> *roster;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<CRKASMRosterProviding> *underlyingRosterProvider;
@property (nonatomic, readonly) <CRKASMUserFetching> *userFetcher;

- (void).cxx_destruct;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchASMUsersWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchNextUsersWithCompletion:(id /* block */)arg1;
- (id /* block */)generator;
- (bool)hasRosterProvider;
- (bool)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithGenerator:(id /* block */)arg1;
- (id)instructorDirectoryForLocationIDs:(id)arg1;
- (bool)isPopulated;
- (id)iteratorForSearchString:(id)arg1 sortingGivenNameFirst:(bool)arg2 pageSize:(long long)arg3;
- (void)latchDefaultValues;
- (id)locationsWithManagePermissions;
- (id)noRosterProviderError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPaths;
- (void)refresh;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resume;
- (id)roster;
- (void)setLocationsWithManagePermissions:(id)arg1;
- (void)setPopulated:(bool)arg1;
- (void)setRoster:(id)arg1;
- (void)setUnderlyingRosterProvider:(id)arg1;
- (void)startObservingUnderlyingProvider;
- (void)stopObservingUnderlyingProvider;
- (id)studentDirectoryForLocationIDs:(id)arg1;
- (void)suspend;
- (id)underlyingRosterProvider;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (id)userFetcher;

@end
