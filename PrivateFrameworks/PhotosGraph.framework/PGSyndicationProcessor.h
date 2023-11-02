
@interface PGSyndicationProcessor : NSObject {
    CLSCurationSession * _curationSession;
    CLSSimilarStacker * _similarStacker;
    PHPhotoLibrary * _syndicationLibrary;
    PGManagerWorkingContext * _workingContext;
}

- (void).cxx_destruct;
- (id)_bestAssetUUIDInAssetCluster:(id)arg1;
- (void)_persistCurationScores:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)duplicateAssetUUIDsForSuggesterResult:(id)arg1 assetsInferredAsGuestAsset:(id)arg2 syndicationLibrary:(id)arg3 error:(id*)arg4 progressBlock:(id /* block */)arg5;
- (id)guestAssetSenderIdentifiersByMomentUUIDForMomentUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)initWithWorkingContext:(id)arg1;
- (id)initWithWorkingContext:(id)arg1 syndicationLibrary:(id)arg2;
- (bool)processSavedSyndicatedAssetsWithError:(id*)arg1 progressBlock:(id /* block */)arg2;
- (bool)processSyndicatedAssetCurationWithError:(id*)arg1 progressBlock:(id /* block */)arg2;
- (bool)processSyndicatedAssetGuestInferenceWithError:(id*)arg1 progressBlock:(id /* block */)arg2;
- (bool)processSyndicatedAssetGuestInferenceWithError:(id*)arg1 progressBlock:(id /* block */)arg2 shareBackSuggester:(id)arg3;
- (bool)processSyndicatedAssetRevGeoCodingWithError:(id*)arg1 progressBlock:(id /* block */)arg2;
- (id)similarStacker;
- (id)syndicationPhotoLibraryWithError:(id*)arg1;

@end
