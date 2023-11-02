
@interface CRKASMConcreteRosterProvider : NSObject <CRKASMRosterProviding, CRKClassKitChangeNotifierDelegate> {
    CRKASMCertificateIngestor * _certificateIngestor;
    CRKClassKitChangeNotifier * _classKitChangeNotifier;
    CRKASMRosterProviderEnvironment * _environment;
    NSArray * _locations;
    NSArray * _locationsWithManagePermissions;
    bool  _populated;
    <CRKASMRoster> * _roster;
    CRKASMRosterUpdater * _rosterUpdater;
    CRKASMWorldBuildOperation * _worldBuildOperation;
}

@property (nonatomic, readonly) CRKASMCertificateIngestor *certificateIngestor;
@property (nonatomic, readonly) CRKClassKitChangeNotifier *classKitChangeNotifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CRKASMRosterProviderEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *locations;
@property (nonatomic, copy) NSArray *locationsWithManagePermissions;
@property (getter=isPopulated, nonatomic) bool populated;
@property (nonatomic, retain) <CRKASMRoster> *roster;
@property (nonatomic, readonly) CRKASMRosterUpdater *rosterUpdater;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CRKASMUserFetching> *userFetcher;
@property (nonatomic, retain) CRKASMWorldBuildOperation *worldBuildOperation;

- (void).cxx_destruct;
- (id)certificateIngestor;
- (id)classKitChangeNotifier;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)environment;
- (bool)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)instructorDirectoryForLocationIDs:(id)arg1;
- (bool)isPopulated;
- (id)locations;
- (id)locationsWithManagePermissions;
- (void)logDurationOfOperation:(id)arg1;
- (void)notifierDidObserveClassKitChange:(id)arg1;
- (void)processFinishedWorldBuild:(id)arg1;
- (void)refresh;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)roster;
- (id)rosterUpdater;
- (void)setLocations:(id)arg1;
- (void)setLocationsWithManagePermissions:(id)arg1;
- (void)setPopulated:(bool)arg1;
- (void)setRoster:(id)arg1;
- (void)setWorldBuildOperation:(id)arg1;
- (void)startNewWorldBuild;
- (id)studentDirectoryForLocationIDs:(id)arg1;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (void)updateManageableLocations:(id)arg1;
- (void)updateRoster:(id)arg1 outTrustedPersonIDsChanged:(bool*)arg2;
- (id)userFetcher;
- (void)worldBuildDidFinish:(id)arg1;
- (id)worldBuildOperation;

@end
