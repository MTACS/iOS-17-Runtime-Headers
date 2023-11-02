
@interface MediaCoreUI.NowPlayingArtworkRestrictionsMonitor : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isMotionDisabled;
    void networkConstrainingObserver;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
