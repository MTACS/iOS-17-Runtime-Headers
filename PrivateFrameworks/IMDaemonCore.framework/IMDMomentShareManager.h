
@interface IMDMomentShareManager : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableDictionary * _shareURLsToContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *shareURLsToContexts;
@property (readonly) Class superclass;

+ (void)_acceptMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_clearCMMTransfersForCMMMessage:(id)arg1;
+ (id)_copiedFileURLFromAssetExportFileURLs:(id)arg1 transferGUID:(id)arg2 error:(id*)arg3;
+ (id)_copyItemAtURL:(id)arg1 toTemporaryDirectoryWithName:(id)arg2 isDirectory:(bool)arg3 error:(id*)arg4;
+ (id)_fetchResultForCuratedOrFirstForMomentShare:(id)arg1 outFetchType:(long long*)arg2;
+ (id)_fileTransferForAssetUUID:(id)arg1 forMessage:(id)arg2 momentShare:(id)arg3 atIndex:(unsigned long long)arg4 ofTotal:(unsigned long long)arg5;
+ (id)_generateTransfersForAssetUUIDs:(id)arg1 forMessage:(id)arg2 inChat:(id)arg3 momentShare:(id)arg4;
+ (id)_loadCMMTransfersForMessage:(id)arg1;
+ (void)_requestResourceFileURLsForAsset:(id)arg1 fileTransfer:(id)arg2 completionHandler:(id /* block */)arg3;
+ (long long)_targetCountForContext:(id)arg1;
+ (void)fetchMomentShareFromShareURL:(id)arg1 forMessage:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_acceptMomentShareIfNecessaryForContext:(id)arg1 isRetry:(bool)arg2;
- (id)_assetUUIDToUnfinishedTransferMapFromTransfers:(id)arg1;
- (id)_contextForMomentShareURL:(id)arg1 forMessage:(id)arg2 inChat:(id)arg3 createIfNeeded:(bool)arg4;
- (void)_fetchAssetsForAcceptedMomentShareWithContext:(id)arg1;
- (void)_generateTransfersForContext:(id)arg1;
- (void)_handleIngestionFailureForContext:(id)arg1;
- (void)_handleMomentShareFetchForContext:(id)arg1 momentShare:(id)arg2 error:(id)arg3;
- (void)_handleResourceRequestForContext:(id)arg1 asset:(id)arg2 transfer:(id)arg3 didCompleteWithFileURL:(id)arg4 error:(id)arg5;
- (void)_persistAttachmentAtFileURL:(id)arg1 forFileTransfer:(id)arg2;
- (void)_removeFinishedIngestionContext:(id)arg1;
- (void)_startAssetExportForContext:(id)arg1;
- (void)_transitionToCompletedStateForContext:(id)arg1;
- (void)_transitionToFetchingMomentShareForContext:(id)arg1;
- (void)_transitionToGenerateTransfersStateForContextIfNecessary:(id)arg1;
- (void)_transitionToWaitingForAssetsForContext:(id)arg1;
- (void)_updateContext:(id)arg1 withChange:(id)arg2;
- (void)_updatePendingTransferMapForContext:(id)arg1 completedTransfer:(id)arg2;
- (id)init;
- (bool)messageHasUnfinishedTransfers:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)regenerateTransfersForMessage:(id)arg1 inChat:(id)arg2 addingAssetWithUUID:(id)arg3;
- (void)registerAndAcceptMomentShareForMessage:(id)arg1 inChat:(id)arg2 resetAssetTransfers:(bool)arg3;
- (void)setShareURLsToContexts:(id)arg1;
- (id)shareURLsToContexts;

@end
