
@interface ML3ITunesSyncImportOperation : ML3ImportOperation {
    NSMutableDictionary * _cachedPIDToFilePathMap;
    NSMutableDictionary * _cachedPIDToLocationPropertyMap;
    NSMutableDictionary * _cachedSyncIDsToPIDsMap;
    long long  _devicePrimaryContainer;
    NSMutableSet * _importedPlaylists;
    bool  _resetSync;
    bool  _sagaIsEnabled;
}

- (void).cxx_destruct;
- (void)_archiveSyncPlistFiles;
- (id)_dbInfoValuesForStep:(id)arg1;
- (bool)_performImportFromPlistFiles:(id)arg1 withTransaction:(id)arg2;
- (bool)_performImportOfTrackData:(id)arg1 WithTransaction:(id)arg2;
- (bool)_performImportWithTransaction:(id)arg1;
- (bool)_processDeletePlaylistOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processDeleteTrackOperation:(id)arg1 withImportSession:(void*)arg2;
- (void)_processGeniusConfigPlist:(id)arg1;
- (bool)_processInsertPlaylistOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processInsertTrackOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processSyncOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processUpdateDBInfoOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processUpdatePlaylistOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processUpdateTrackOperation:(id)arg1 withImportSession:(void*)arg2;
- (void)_recoverExistingAsset:(id)arg1 forTrackId:(long long)arg2;
- (id)_syncOperationsFromPlistFile:(id)arg1;
- (id)_syncPlistFilesFromDirectory:(id)arg1;
- (unsigned long long)importSource;
- (void)main;

@end
