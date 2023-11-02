
@interface TipsUI.DocumentAssetViewModel : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _imageState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isAssetLoaded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isPlaying;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isVideoLoaded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _player;
    void _tipsContentModel;
    void cancellables;
    void didPlayToEndTime;
    void document;
    void imageLoader;
    void isLoading;
    void networkIsReachableCancellable;
    void playerDidFinishSubject;
    void prefetchTimer;
    void videoFileLoader;
    void videoLoaderCancellable;
}

@end
