
@interface QLDownloadingItemViewController : QLDetailItemViewController {
    QLDetailItemViewControllerState * _cancelableDownloadingState;
    UIImage * _cloudImage;
    QLDetailItemViewControllerState * _completedDownloadState;
    bool  _didDisappear;
    UIImageView * _downloadImageView;
    bool  _downloaded;
    bool  _downloading;
    <QLDownloadingItemViewControllerDelegate> * _downloadingDelegate;
    QLDetailItemViewControllerState * _nonCancelableDownloadingState;
    QLItem * _previewItem;
    QLDetailItemViewControllerState * _previewLoadingState;
    id  _progressSubscriber;
    QLRoundProgressView * _progressView;
    QLDetailItemViewControllerState * _readyForDownloadState;
    bool  _showsLoadingPreviewSpinner;
}

@property (nonatomic) bool downloaded;
@property (nonatomic) <QLDownloadingItemViewControllerDelegate> *downloadingDelegate;
@property (nonatomic, readonly) QLRoundProgressView *progressView;
@property (nonatomic) bool showsLoadingPreviewSpinner;

- (void).cxx_destruct;
- (void)_presentConnectivityAlert;
- (void)_setDownloading:(bool)arg1 animated:(bool)arg2;
- (void)_startDownload:(bool)arg1;
- (void)_startDownloadOperation;
- (void)_stopDownload:(bool)arg1;
- (void)_toggleDownload:(bool)arg1;
- (void)_updateFileSizeWithProgress:(double)arg1 animated:(bool)arg2;
- (bool)downloaded;
- (id)downloadingDelegate;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performAction;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)progressView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setDownloaded:(bool)arg1;
- (void)setDownloadingDelegate:(id)arg1;
- (void)setShowsLoadingPreviewSpinner:(bool)arg1;
- (bool)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2 forceIfPossible:(bool)arg3;
- (bool)showsLoadingPreviewSpinner;
- (void)startDownload:(bool)arg1;
- (void)startDownloadIfNeeded;
- (void)viewDidLoad;

@end
