
@interface MCMContainerMigrator : NSObject {
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, retain) MCMUserIdentityCache *userIdentityCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_checkIfDeviceMayNeedSystemContainerACLMigration:(id)arg1;
- (bool)_migrateBundleContainersWithError:(id*)arg1;
- (bool)_migrateDeleteOperationManifestsWithError:(id*)arg1;
- (bool)_migrateManifestIfNecessaryAtURL:(id)arg1 withLibraryRepairForUser:(id)arg2 error:(id*)arg3;
- (bool)_performEntitlementBypassListMigrationWithError:(id*)arg1;
- (id)initWithUserIdentityCache:(id)arg1;
- (bool)performSynchronousBuildUpgradeMigration:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)setUserIdentityCache:(id)arg1;
- (id)userIdentityCache;

@end
