
@interface CRKASMRosterProviderDecoratorBase : NSObject <CRKASMRosterProviding> {
    NSObject<CRKASMRosterProviding> * _underlyingRosterProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *locationsWithManagePermissions;
@property (getter=isPopulated, nonatomic, readonly) bool populated;
@property (nonatomic, readonly) <CRKASMRoster> *roster;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<CRKASMRosterProviding> *underlyingRosterProvider;
@property (nonatomic, readonly) <CRKASMUserFetching> *userFetcher;

+ (id)keyPathsForValuesAffectingLocationsWithManagePermissions;
+ (id)keyPathsForValuesAffectingPopulated;
+ (id)keyPathsForValuesAffectingRoster;

- (void).cxx_destruct;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (bool)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithRosterProvider:(id)arg1;
- (id)instructorDirectoryForLocationIDs:(id)arg1;
- (bool)isPopulated;
- (id)locationsWithManagePermissions;
- (void)refresh;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)roster;
- (id)studentDirectoryForLocationIDs:(id)arg1;
- (id)underlyingRosterProvider;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (id)userFetcher;

@end
