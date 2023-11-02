
@interface MPLibraryKeepLocalStatusObserver : NSObject <MPMediaDownloadObserver> {
    NSSet * _activeDownloads;
    MPLibraryKeepLocalStatusObserverConfiguration * _configuration;
    struct MPLibraryActiveKeepLocalStatus { 
        long long statusType; 
        double downloadProgress; 
    }  _currentStatus;
    unsigned long long  _downloadPausedReason;
    NSSet * _pausedDownloads;
    id /* block */  _statusBlock;
}

@property (nonatomic, retain) MPLibraryKeepLocalStatusObserverConfiguration *configuration;
@property (nonatomic, readonly) struct MPLibraryActiveKeepLocalStatus { long long x1; double x2; } currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadPausedReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ statusBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct MPLibraryActiveKeepLocalStatus { long long x1; double x2; })_calculateCurrentStatus;
- (void)_handleDownloadStateChanged:(id)arg1;
- (void)_transientStateDidChangeNotification:(id)arg1;
- (bool)_updateActiveDownloadsAllowingDownloadRemoval:(bool)arg1;
- (void)_updateCurrentStatus;
- (id)configuration;
- (struct MPLibraryActiveKeepLocalStatus { long long x1; double x2; })currentStatus;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
- (unsigned long long)downloadPausedReason;
- (id)init;
- (void)setConfiguration:(id)arg1;
- (void)setStatusBlock:(id /* block */)arg1;
- (id /* block */)statusBlock;

@end
