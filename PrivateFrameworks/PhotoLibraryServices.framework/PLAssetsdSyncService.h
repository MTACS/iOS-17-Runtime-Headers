
@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService <PLAssetsdSyncServiceProtocol> {
    bool  _didFinalizeRestore;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PLLibraryServicesManager * _libraryServicesManager;
    PLXPCTransaction * _libraryTransaction;
    NSObject<OS_dispatch_group> * _updateGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAsset:(id)arg1 toAlbumsForUUID:(id)arg2 inLibrary:(id)arg3;
- (void)_cleanupAlbumMetadataAsideFilesAfterRestore;
- (id)_fileRestoreExclusionPaths;
- (void)_finalizeOTARestoreEndedAndRecreateAlbums:(bool)arg1;
- (void)_linkPathsAside:(id)arg1;
- (id)_readRestoreAlbumMetadataForAlbum:(id)arg1;
- (void)_recoverAsideFiles:(id)arg1;
- (void)_updatePendingCountForMissingAsset:(id)arg1 inLibrary:(id)arg2;
- (void)_updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(bool)arg3;
- (void)finalizeOTARestoreRecreatingAlbums:(bool)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(bool)arg3;

@end
