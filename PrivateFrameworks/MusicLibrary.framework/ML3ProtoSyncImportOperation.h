
@interface ML3ProtoSyncImportOperation : ML3ImportOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ML3DatabaseConnection * _connection;
    bool  _importFinished;
    bool  _isReadSourceCancelled;
    bool  _isServerImport;
    bool  _pairedDeviceCanProcessStandAloneCollections;
    NSObject<OS_dispatch_source> * _readSource;
    long long  _readSourceState;
    NSMutableSet * _syncIdsToUnlink;
    unsigned int  _syncPackageNum;
    bool  _syncSessionStarted;
    int  _syncType;
    unsigned int  _totalSyncPackageCount;
}

- (void).cxx_destruct;
- (bool)_performImportWithTransaction:(id)arg1;
- (bool)_processAlbumArtistOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processAlbumOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processMediaItemOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processPlaylistOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processSyncError:(id)arg1;
- (bool)_processSyncHeader:(id)arg1;
- (bool)_processSyncOperation:(id)arg1 withImportSession:(void*)arg2;
- (bool)_processSyncPackage:(id)arg1 withImportSession:(void*)arg2;
- (void)_unlinkUnavailableMediaItems;
- (void)cancel;
- (unsigned long long)importSource;
- (id)initWithDatabaseImport:(id)arg1;
- (void)main;

@end
