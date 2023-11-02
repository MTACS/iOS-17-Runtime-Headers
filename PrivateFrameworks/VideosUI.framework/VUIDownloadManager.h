
@interface VUIDownloadManager : NSObject <TVPDownloadDelegate, TVPDownloadSessionDelegate> {
    NSPointerArray * _delegates;
    bool  _dialogBeingPresented;
    NSMutableArray * _failedDownloadsNeedingDialog;
    NSMutableArray * _mutableDownloads;
    bool  _performingAddDownloadsBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSPointerArray *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dialogBeingPresented;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic, retain) NSMutableArray *failedDownloadsNeedingDialog;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *mutableDownloads;
@property (nonatomic) bool performingAddDownloadsBatch;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeAccountDidChange:(id)arg1;
- (id)_alertControllerForFailedDownloads:(id)arg1 outIncludeGoToSettingsButton:(bool*)arg2;
- (bool)_anyDownloadsFailedDueToInvalidUserToken:(id)arg1;
- (void)_appDidStartRunning:(id)arg1;
- (void)_configureDownloadFromUserPrefs:(id)arg1 allowCellular:(bool)arg2 quality:(long long)arg3 preferEnhancedDownload:(bool)arg4;
- (id)_createMediaItemForVideoManagedObject:(id)arg1 isForStartingDownload:(bool)arg2 downloadQuality:(long long)arg3;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_loadImageForImageInfoManagedObject:(id)arg1 imageType:(unsigned long long)arg2 download:(id)arg3 useForStorageSettings:(bool)arg4;
- (void)_loadImageForSeriesManagedObject:(id)arg1 imageType:(unsigned long long)arg2 download:(id)arg3 useForStorageSettings:(bool)arg4;
- (void)_loadImageForVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2 download:(id)arg3 useForStorageSettings:(bool)arg4;
- (void)_notifyDelegatesThatDownloadsDidChange;
- (void)_preflightDownloadForPresentingViewController:(id)arg1 contentAllowsCellularDownload:(bool)arg2 completion:(id /* block */)arg3;
- (void)_showDownloadErrorDialogIfAppropriate;
- (void)_showDownloadErrorDialogIfAppropriateAllowingSignInPrompt:(bool)arg1;
- (void)addDelegate:(id)arg1;
- (void)addDownloadForVideoManagedObject:(id)arg1 allowCellular:(bool)arg2 quality:(long long)arg3 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg4 preferEnhancedDownload:(bool)arg5;
- (void)addDownloadOrRenewKeysForMediaItem:(id)arg1 allowCellular:(bool)arg2 quality:(long long)arg3 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg4;
- (void)cancelAndRemoveDownloadForMediaItem:(id)arg1;
- (void)cancelDownloadForAdamID:(id)arg1;
- (void)dealloc;
- (id)delegates;
- (bool)dialogBeingPresented;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)download:(id)arg1 didDetermineMaximumResolution:(long long)arg2 maximumVideoRange:(long long)arg3;
- (void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;
- (void)download:(id)arg1 processFinishedDownloadWithCompletion:(id /* block */)arg2;
- (void)download:(id)arg1 willDownloadToURL:(id)arg2;
- (void)downloadSession:(id)arg1 didAddRestoredDownloads:(id)arg2;
- (id)downloads;
- (id)existingDownloadForAdamID:(id)arg1;
- (id)failedDownloadsNeedingDialog;
- (void)fetchNewKeysForDownloadedVideoManagedObject:(id)arg1;
- (id)init;
- (void)initializeDownloadManager;
- (id)mutableDownloads;
- (void)performBatchAddDownloadsWithBlock:(id /* block */)arg1;
- (bool)performingAddDownloadsBatch;
- (void)preflightDownloadForContentRating:(id)arg1 presentingViewController:(id)arg2 contentAllowsCellularDownload:(bool)arg3 completion:(id /* block */)arg4;
- (void)preflightDownloadForLibraryMediaEntity:(id)arg1 presentingViewController:(id)arg2 contentAllowsCellularDownload:(bool)arg3 completion:(id /* block */)arg4;
- (void)preflightDownloadForTVPMediaItem:(id)arg1 presentingViewController:(id)arg2 contentAllowsCellularDownload:(bool)arg3 completion:(id /* block */)arg4;
- (void)preflightDownloadForVideosPlayable:(id)arg1 presentingViewController:(id)arg2 contentAllowsCellularDownload:(bool)arg3 completion:(id /* block */)arg4;
- (void)removeDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setDialogBeingPresented:(bool)arg1;
- (void)setFailedDownloadsNeedingDialog:(id)arg1;
- (void)setMutableDownloads:(id)arg1;
- (void)setPerformingAddDownloadsBatch:(bool)arg1;

@end
