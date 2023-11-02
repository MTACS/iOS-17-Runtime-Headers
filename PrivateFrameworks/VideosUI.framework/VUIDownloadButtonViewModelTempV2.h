
@interface VUIDownloadButtonViewModelTempV2 : VUIDownloadButtonViewModel

- (void)deleteDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMPMediaItem:(id)arg1;
- (id)initWithMPMediaItemCollection:(id)arg1;
- (id)initWithVideoManagedObject:(id)arg1;
- (id)initWithVideosPlayable:(id)arg1;
- (void)pauseDownload;
- (void)preflightPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeDownload;
- (void)startDownloadAllowingCellular:(bool)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg2 quality:(long long)arg3 preferEnhancedDownload:(bool)arg4;
- (void)stopDownload;

@end
