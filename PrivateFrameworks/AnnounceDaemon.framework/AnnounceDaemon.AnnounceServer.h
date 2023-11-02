
@interface AnnounceDaemon.AnnounceServer : NSObject {
    void announceReachabilityServiceListener;
    void announceServiceListener;
    void playbackSessionServiceListener;
    void systemNotificationObserver;
    void tonePlayerServiceListener;
}

- (void).cxx_destruct;
- (id)init;

@end
