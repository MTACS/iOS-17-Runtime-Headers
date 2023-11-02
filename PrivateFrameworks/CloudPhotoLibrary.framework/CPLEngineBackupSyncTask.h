
@interface CPLEngineBackupSyncTask : CPLEngineForceSyncTask

- (id)description;
- (bool)forBackup;
- (id)initWithEngineLibrary:(id)arg1 delegate:(id)arg2;

@end
