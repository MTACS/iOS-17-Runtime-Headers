
@interface AppStoreKitInternal.VideoPlaybackCoordinator : NSObject {
    void _activeVideo;
    void _isGlobalAutoPlayEnabled;
    void currentPlaybackIndex;
    void isAutoPlayActive;
    void isAutoPlayEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricsPipeline;
    void parentViewController;
    void playbackCoalescingWaitTime;
    void playbackQueue;
    void playbackWorkItem;
    void shouldLoopAutoPlayback;
    void shouldLoopSingleVideo;
    void videoViews;
    void visibilityTracker;
}

- (void).cxx_destruct;
- (void)didChangeAutoPlayVideoSetting:(id)arg1;
- (void)didEnterBackground;
- (id)init;
- (void)willEnterForeground;

@end
