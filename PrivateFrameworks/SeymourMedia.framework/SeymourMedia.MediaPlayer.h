
@interface SeymourMedia.MediaPlayer : NSObject <AVPlayerPlaybackCoordinatorDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _audioFormatMediaKind;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _startTimeOverride;
    void analyticsReporter;
    void assetClient;
    void eventHub;
    void isReadyToPlay;
    void mediaSyncCoordinator;
    void mediaSyncSuspension;
    void metricPlaybackTracker;
    void onReadyToPlay;
    void platform;
    void playerItemObserver;
    void screenCaptureMonitor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionOrigin;
    void startTime;
    void state;
    void subscriptionToken;
    void timeJumpCoordinator;
    void timelineObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  workout;
}

- (void).cxx_destruct;
- (id)init;
- (id)playbackCoordinator:(id)arg1 identifierForPlayerItem:(id)arg2;

@end
