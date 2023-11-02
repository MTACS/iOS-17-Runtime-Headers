
@interface PLDuplicateMergeCrashRecovery : NSObject {
    PLPhotoLibrary * _library;
    PLPhotoLibraryPathManager * _pathManager;
}

- (void).cxx_destruct;
- (id)_crashRecoveryMarkerFileURL;
- (id)_readCrashRecoveryUUIDContainerMarkerFile;
- (id)_readCrashRecoveryUUIDListMarkerFile;
- (void)_recoveryMasterRecordCleanupForAsset:(id)arg1;
- (void)_recoveryMasterResourceRecordCleanupForAsset:(id)arg1;
- (long long)_requestRecoveryActionForAsset:(id)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)performCrashRecoveryIfNeeded;
- (bool)removeCrashRecoveryMarkerFileWithError:(id*)arg1;
- (bool)writeCrashRecoveryMarkerFileForTargetAssetUUID:(id)arg1 error:(id*)arg2;

@end
