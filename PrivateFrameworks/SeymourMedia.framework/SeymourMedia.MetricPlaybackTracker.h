
@interface SeymourMedia.MetricPlaybackTracker : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activeMultiUserSession;
    void assetClient;
    void audioFocusType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  catalogWorkout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentSubtitleSelection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  downloadState;
    void eventHub;
    void expectedStartTime;
    void expectedWorkoutPlaybackPause;
    void isPictureInPictureStopping;
    void lastSeekFinishedPosition;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastWorkoutPlaybackInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mediaType;
    void metricActivityTrackingDevices;
    void musicIDStartPlaybackInfoMap;
    void networkEvaluator;
    void onInvalidTransition;
    void platform;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  playbackFocus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  playbackMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  remoteDisplayConnection;
    void reportedStopMusicIDS;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  seekBeganMusicTrack;
    void seekBeganMusicTrackPosition;
    void seekBeganOverallPosition;
    void seekBeganTimestamp;
    void seeking;
    void startTime;
    void subscriptionToken;
}

- (void)handleAppBackground;
- (void)handlePlaybackInterrupted;

@end
