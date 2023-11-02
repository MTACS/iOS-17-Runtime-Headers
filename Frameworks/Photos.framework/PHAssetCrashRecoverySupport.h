
@interface PHAssetCrashRecoverySupport : NSObject <PLXPCUserInfo> {
    PLLibraryServicesManager * _libraryServicesManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitRequest:(id)arg1 reply:(id /* block */)arg2;
- (bool)_isCrashRecoveryFilename:(id)arg1;
- (bool)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)libraryServicesManager;
- (id)persistentStoreCoordinator;
- (void)recoverFromCrashIfNeeded;

@end
