
@interface VideosUI.DownloadStateIndicatorViewModel : VideosUI.ViewModel {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _downloadProgress;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _imageViewModel;
    void downloadModel;
    void downloadStateObserver;
    void progressObserver;
}

- (void)downloadStarted:(id)arg1;

@end
