
@interface PBFPosterExtensionDataStoreIntrospector : NSObject {
    bool  _dataStoreDatabaseExists;
    NSURL * _dataStoreDatabaseURL;
    NSURL * _dataStoreExtensionsURL;
    NSURL * _dataStoreURL;
    unsigned long long  _dataStoreVersion;
    NSNumber * _descriptorsExistSentinel;
    NSArray * _extensionStoreCoordinators;
    NSDictionary * _latestPathsForProviders;
    NSDictionary * _legacyPosterToAssociatedPoster;
    NSUUID * _legacySelectedPosterUUID;
    NSOrderedSet * _legacySortedPosterUUIDs;
    NSNumber * _multipleVersionsForConfigurationDataExistsSentinel;
    NSDictionary * _posterToAssociatedPoster;
    NSSet * _providers;
    NSMutableDictionary * _roleToParentToChildPosterUUID;
    NSMutableDictionary * _roleToSelectedPosterUUID;
    NSMutableDictionary * _roleToSortedPosterUUID;
    NSSet * _snapshotURLs;
    NSNumber * _snapshotsExistSentinel;
    NSNumber * _userConfigurationDataExistsSentinel;
}

@property (nonatomic, readonly) bool assocPostersExist;
@property (nonatomic, readonly) unsigned long long dataStoreVersion;
@property (nonatomic, readonly) bool descriptorsExist;
@property (nonatomic, readonly) bool legacyAssocPostersExist;
@property (nonatomic, readonly) bool multipleVersionsForConfigurationDataExists;
@property (nonatomic, readonly) NSSet *providers;
@property (nonatomic, readonly) NSSet *roles;
@property (nonatomic, readonly) NSSet *snapshotURLs;
@property (nonatomic, readonly) bool snapshotsExist;
@property (nonatomic, readonly) bool userConfigurationDataExists;

- (void).cxx_destruct;
- (void)_hydrate;
- (id)_openDatabaseIfPossible:(out id*)arg1;
- (bool)assocPostersExist;
- (id)associatedPosterForRole:(id)arg1 parentPosterUUID:(id)arg2;
- (id)associatedPosterUUIDForPosterUUIDForRole:(id)arg1 error:(out id*)arg2;
- (id)associatedPosterUUIDForRole:(id)arg1 parentPosterUUID:(id)arg2 error:(out id*)arg3;
- (unsigned long long)dataStoreVersion;
- (bool)descriptorsExist;
- (id)extensionStoreCoordinatorForProvider:(id)arg1;
- (id)initWithURL:(id)arg1 error:(out id*)arg2;
- (bool)legacyAssocPostersExist;
- (id)legacyAssociatedPosterForParentPosterUUID:(id)arg1;
- (id)legacyAssociatedPosterParentUUIDToChildUUIDWithError:(out id*)arg1;
- (id)legacyAssociatedPosterUUIDForPosterUUID:(id)arg1 error:(out id*)arg2;
- (id)legacySelectedPosterUUIDWithError:(out id*)arg1;
- (id)legacySortedPosterUUIDsWithError:(out id*)arg1;
- (bool)multipleVersionsForConfigurationDataExists;
- (unsigned long long)numberOfPostersForRole:(id)arg1;
- (id)posterWithUUID:(id)arg1;
- (id)providers;
- (id)roles;
- (id)selectedPosterUUIDForRole:(id)arg1 error:(out id*)arg2;
- (id)snapshotURLs;
- (bool)snapshotsExist;
- (id)sortedPosterUUIDsForRole:(id)arg1 error:(out id*)arg2;
- (bool)userConfigurationDataExists;

@end
