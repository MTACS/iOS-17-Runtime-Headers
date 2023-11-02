
@interface MusicUI.SocialBadgingMapRequestCoordinator : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  badgingMap;
    void lock;
    void objectGraph;
    void pendingBadgingRequest;
    void pendingUserSocialProfileFetchRequests;
    void workQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
