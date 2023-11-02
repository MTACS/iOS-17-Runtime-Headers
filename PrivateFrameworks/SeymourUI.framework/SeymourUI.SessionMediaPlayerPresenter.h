
@interface SeymourUI.SessionMediaPlayerPresenter : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _preventTimeJumpEnabled;
    void accountProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityTypeBehavior;
    void audioPlayerPresenter;
    void audioSessionCoordinator;
    void avPlayerDismissal;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  catalogWorkout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentMusicTrack;
    void currentSessionRouteCategory;
    void dismissalBehavior;
    void display;
    void eventHub;
    void externalOverlayPresenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  gymKitConnectionSnapshot;
    void isRemoteDisplayConnected;
    void isShowingMediaMoment;
    void keyDeliveryClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastForegroundPlaybackSnapshot;
    void mediaPlayer;
    void mediaTagStringBuilder;
    void multiUserClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  multiUserSessionRequiringResync;
    void nowPlayingUpdater;
    void onDidStartPictureInPicture;
    void onDisplayDismissed;
    void onRestoreFromPictureInPicture;
    void onTapAirplay;
    void onTapCollapse;
    void onTapExit;
    void onTapPlay;
    void onTapSettings;
    void onWillStopPictureInPicture;
    void outputDeviceChangedObserver;
    void outputDevicesChangedObserver;
    void platform;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  playbackSnapshot;
    void remoteBrowsingSource;
    void remoteKeyDeliveryClient;
    void sessionClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionOrigin;
    void sessionRouteMonitor;
    void shouldResumeSyncPlaybackOnForeground;
    void siriRequestedPlaybackState;
    void startTime;
    void state;
    void storefrontLocalizer;
    void subscriptionToken;
}

- (void)handleAudioInterruptionWithNotification:(id)arg1;

@end
