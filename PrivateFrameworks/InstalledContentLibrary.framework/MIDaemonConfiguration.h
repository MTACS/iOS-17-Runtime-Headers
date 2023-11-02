
@interface MIDaemonConfiguration : MIGlobalConfiguration {
    bool  _allowPatchWithoutSinf;
    bool  _codeSigningEnforcementIsDisabled;
    NSURL * _daemonUserDataLibraryDirectory;
    bool  _deviceHasPersonas;
    unsigned long long  _estimatedAvailableMemoryForValidation;
    unsigned int  _installQOSOverride;
    bool  _localSigningIsUnrestricted;
    long long  _nSimultaneousInstallations;
    bool  _skipDeviceFamilyCheck;
    bool  _skipThinningCheck;
}

@property (nonatomic, readonly) bool allowPatchWithoutSinf;
@property (nonatomic, readonly) bool codeSigningEnforcementIsDisabled;
@property (nonatomic, readonly) NSURL *currentUserCachesDirectory;
@property (nonatomic, readonly) NSURL *currentUserDataDirectory;
@property (nonatomic, readonly) NSURL *currentUserJournalStorageBaseURL;
@property (nonatomic, readonly) NSURL *currentUserLaunchServicesOperationLookAsideStorageBaseURL;
@property (nonatomic, readonly) NSURL *currentUserLaunchServicesOperationStorageBaseURL;
@property (nonatomic, readonly) NSURL *daemonUserDataLibraryDirectory;
@property (nonatomic, readonly) bool deviceHasPersonas;
@property (getter=wasErroneousContainerCleanupDone, nonatomic) bool erroneousContainerCleanupDone;
@property (nonatomic, readonly) unsigned long long estimatedAvailableMemoryForValidation;
@property (nonatomic) bool haveUpdatedAppExtensionDataContainersWithParentID;
@property (nonatomic, readonly) unsigned int installQOSOverride;
@property (nonatomic, readonly) NSURL *journalStorageBaseURL;
@property (nonatomic, readonly) NSURL *launchServicesOperationLookAsideStorageBaseURL;
@property (nonatomic, readonly) NSURL *launchServicesOperationStorageBaseURL;
@property (nonatomic, readonly) bool localSigningIsUnrestricted;
@property (nonatomic, readonly) long long nSimultaneousInstallations;
@property (nonatomic, readonly) bool skipDeviceFamilyCheck;
@property (nonatomic, readonly) bool skipThinningCheck;
@property (nonatomic, readonly) NSURL *stagingRootForSystemContent;
@property (nonatomic, readonly) NSURL *stagingRootForUserContent;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowPatchWithoutSinf;
- (id)builtInApplicationBundleIDs;
- (bool)codeSigningEnforcementIsDisabled;
- (id)currentUserCachesDirectory;
- (id)currentUserDataDirectory;
- (id)currentUserJournalStorageBaseURL;
- (id)currentUserLaunchServicesOperationLookAsideStorageBaseURL;
- (id)currentUserLaunchServicesOperationStorageBaseURL;
- (id)daemonUserDataLibraryDirectory;
- (bool)deviceHasPersonas;
- (unsigned long long)estimatedAvailableMemoryForValidation;
- (bool)haveUpdatedAppExtensionDataContainersWithParentID;
- (id)init;
- (id)initForTesting;
- (unsigned int)installQOSOverride;
- (id)journalStorageBaseURL;
- (id)launchServicesOperationLookAsideStorageBaseURL;
- (id)launchServicesOperationStorageBaseURL;
- (bool)localSigningIsUnrestricted;
- (long long)nSimultaneousInstallations;
- (void)setErroneousContainerCleanupDone:(bool)arg1;
- (void)setHaveUpdatedAppExtensionDataContainersWithParentID:(bool)arg1;
- (bool)skipDeviceFamilyCheck;
- (bool)skipThinningCheck;
- (id)stagingRootForDevice:(int)arg1 url:(id)arg2 identifier:(unsigned long long*)arg3 error:(id*)arg4;
- (id)stagingRootForIdentifier:(unsigned long long)arg1;
- (id)stagingRootForSystemContent;
- (id)stagingRootForURL:(id)arg1 identifier:(unsigned long long*)arg2 error:(id*)arg3;
- (id)stagingRootForUserContent;
- (bool)wasErroneousContainerCleanupDone;

@end
