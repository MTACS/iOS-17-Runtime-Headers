
@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {
    PLModelMigrator * _modelMigrator;
    PLPhotoLibraryPathManager * _pathManager;
    bool  _tokenIsKnownToBeMissing;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _tokenLock;
}

+ (id)_readTokenAtPath:(id)arg1 allowNotExists:(bool)arg2 error:(id*)arg3;
+ (bool)_writeTokenToPath:(id)arg1 withInfo:(id)arg2 allowOverwrite:(bool)arg3 error:(id*)arg4;
+ (bool)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)foregroundRestoreFromCloudBackupCompleteTokenExists;
- (id)initWithModelMigrator:(id)arg1;
- (bool)isBackgroundRestorePostProcessingInProgressTokenValid;
- (bool)isModelMigrationRestorePostProcessingComplete;
- (bool)needsToPrepareForBackgroundRestore;
- (bool)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
- (bool)writeBackgroundRestorePostProcessingInProgressToken;
- (bool)writeModelMigrationRestorePostProcessingCompleteToken;

@end
