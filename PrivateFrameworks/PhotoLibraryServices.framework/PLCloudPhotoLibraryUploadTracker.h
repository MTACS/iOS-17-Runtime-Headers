
@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    NSMutableSet * _deferredAssetsToUpload;
    NSMutableDictionary * _masterRecordUploadState;
    NSMutableSet * _mastersToUpload;
    NSMutableSet * _mastersToUploadTrackingSize;
    unsigned long long  _totalNumberOfDeferredAssets;
    unsigned long long  _totalNumberOfPushedMasters;
    unsigned long long  _totalNumberOfUnpushedMasters;
    unsigned long long  _totalNumberOfUploadedMasters;
    unsigned long long  _totalSizeOfPushedOriginals;
    unsigned long long  _totalSizeOfUnpushedOriginals;
    unsigned long long  _totalUploadedOriginalSize;
    NSMutableDictionary * _trackedResourceMasterUploaded;
    NSMutableDictionary * _trackedResourceProgressSize;
}

@property unsigned long long totalNumberOfDeferredAssets;
@property unsigned long long totalNumberOfUnpushedMasters;
@property unsigned long long totalNumberOfUploadedMasters;
@property unsigned long long totalSizeOfUnpushedOriginals;
@property unsigned long long totalUploadedOriginalSize;

- (void).cxx_destruct;
- (id)_constructKeyForScopedIdentifier:(id)arg1 type:(int)arg2;
- (bool)_isMasterRecordUploaded:(id)arg1;
- (void)_setBatchUploadStateForTrackedMasters:(id)arg1 withState:(bool)arg2;
- (void)_stopTrackingResourceWithScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3;
- (bool)_trackingScopedIdentifier:(id)arg1;
- (void)addSizeForUnpushedOriginals:(unsigned long long)arg1 forMasterScopedIdentifier:(id)arg2 forAssetScopedIdentifier:(id)arg3;
- (id)currentStateForDebug;
- (void)dealloc;
- (id)init;
- (void)reset;
- (void)resetIfNeededWithLibrary:(id)arg1 isInitialUpload:(bool)arg2;
- (void)setTotalNumberOfDeferredAssets:(unsigned long long)arg1;
- (void)setTotalNumberOfUnpushedMasters:(unsigned long long)arg1;
- (void)setTotalNumberOfUploadedMasters:(unsigned long long)arg1;
- (void)setTotalSizeOfUnpushedOriginals:(unsigned long long)arg1;
- (void)setTotalUploadedOriginalSize:(unsigned long long)arg1;
- (void)setupFromCPLManager:(id)arg1;
- (void)setupFromLibrary:(id)arg1 isInitialUpload:(bool)arg2;
- (void)stopTrackingMaster:(id)arg1;
- (unsigned long long)totalNumberOfDeferredAssets;
- (unsigned long long)totalNumberOfUnpushedMasters;
- (unsigned long long)totalNumberOfUploadedMasters;
- (unsigned long long)totalSizeOfUnpushedOriginals;
- (unsigned long long)totalUploadedOriginalSize;
- (void)trackDeferredAssetForScopedIdentifier:(id)arg1;
- (void)updateForMasterResourceUploadWithScopedIdentifier:(id)arg1 progress:(float)arg2 fileSize:(unsigned long long)arg3 type:(int)arg4;
- (void)uploadFinishedForMasterRecordWithScopedIdentifier:(id)arg1 didUpdateStatus:(bool*)arg2;
- (void)uploadFinishedForMasterResourceWithScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3 withError:(bool)arg4;

@end
