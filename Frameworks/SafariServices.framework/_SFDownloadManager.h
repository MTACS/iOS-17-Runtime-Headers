
@interface _SFDownloadManager : NSObject <_SFDownloadDelegate> {
    id /* block */  _blockToExecuteWhenDownloadHistoryIsLoaded;
    NSURL * _downloadHistoryURL;
    NSMutableArray * _downloads;
    NSURL * _downloadsRootURL;
    NSMapTable * _downloadsToDeferAdding;
    <_SFDownloadDelegate> * _extraDownloadDelegate;
    WBSCoalescedAsynchronousWriter * _historyWriter;
    _SFDownloadIconCache * _iconCache;
    bool  _loadedDownloadHistory;
    NSTimer * _removeDownloadsTimer;
    double  _totalProgress;
    NSTimer * _updateTotalProgressTimer;
    long long  _viewingDownloadsCount;
}

@property (setter=_setLastUnviewedDownloadDate:, nonatomic, retain) NSDate *_lastUnviewedDownloadDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *downloads;
@property (nonatomic, readonly) NSURL *downloadsRootURL;
@property (nonatomic) <_SFDownloadDelegate> *extraDownloadDelegate;
@property (nonatomic, readonly) bool hasUnviewedDownloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _SFDownloadIconCache *iconCache;
@property (nonatomic, readonly) unsigned long long runningDownloadsCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double totalProgress;

+ (id)defaultDownloadsHistoryURL;
+ (id)downloadRepresentationsAtURL:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addDownload:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)_busyDownloads;
- (double)_calculateTotalProgress;
- (bool)_canExpireDownloadOnCompletion:(id)arg1;
- (id)_containerDirectoryForDownload:(id)arg1;
- (id)_dataForPersistingToHistory;
- (id)_lastUnviewedDownloadDate;
- (void)_loadDownloadHistory;
- (void)_loadDownloadHistoryAsynchronous:(bool)arg1;
- (void)_noteDownloadsChanged;
- (void)_removeDeletedDownloads;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (void)_setHasUnviewedDownloadsIfNeeded;
- (void)_setLastUnviewedDownloadDate:(id)arg1;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)_updateTotalProgress:(id)arg1;
- (void)createDirectoryForDownload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deferAddingDownloadWhenStarted:(id)arg1;
- (void)didBeginViewingDownloads;
- (void)didEndViewingDownloads;
- (void)downloadContentsDidChange:(id)arg1;
- (void)downloadDidFail:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidImportFileToDownloadsFolder:(id)arg1;
- (void)downloadDidReceiveResponse:(id)arg1;
- (void)downloadDidResume:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (bool)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
- (void)downloadWillBeDeleted:(id)arg1;
- (id)downloads;
- (id)downloadsRootURL;
- (id)extraDownloadDelegate;
- (void)getDownloadsWithCompletionHandler:(id /* block */)arg1;
- (bool)hasUnviewedDownloads;
- (id)iconCache;
- (id)initAsReadonly:(bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadDownloadsSynchronously;
- (void)removeDownloads:(id)arg1;
- (void)removeDownloadsStartedAfterDate:(id)arg1;
- (unsigned long long)runningDownloadsCount;
- (void)savePendingChangesBeforeTermination;
- (void)setExtraDownloadDelegate:(id)arg1;
- (void)setHasUnviewedDownloads:(bool)arg1;
- (bool)shouldExcludeDownloadFromFileSystem:(id)arg1;
- (bool)shouldExcludeDownloadFromList:(id)arg1;
- (double)totalProgress;

@end
