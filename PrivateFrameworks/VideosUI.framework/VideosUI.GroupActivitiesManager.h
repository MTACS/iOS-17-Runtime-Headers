
@interface VideosUI.GroupActivitiesManager : NSObject <VUIGroupActivitiesManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isSessionActive;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _session;
    void dismissDelayTimer;
    void endSessionReason;
    void metricsDictionary;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modifyingActivityIdentifier;
    void participantsCount;
    void participantsCountMax;
    void playerObserver;
    void playingObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousState;
    void sessionActivityObserver;
    void sessionActivityParticipantsObserver;
    void sessionStateObserver;
    void sharedPlayer;
    void signpostState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
    void subscriptions;
}

@property (nonatomic, readonly) bool isEligibleForSession;
@property (nonatomic) bool isSessionActive;

- (void).cxx_destruct;
- (void)endSessionWithReason:(unsigned long long)arg1;
- (bool)handleCommerceSharedWatchUrl:(id)arg1;
- (void)handleSharedPlayable:(void *)arg1 watchTogetherUrl:(void *)arg2 startupAction:(void *)arg3 previewMetadata:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 66: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, oneway /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, out short, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, long long, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, oneway /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, const out /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, void, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, void, int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, double, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (bool)isEligibleForSession;
- (bool)isSessionActive;
- (bool)isSharedWatchIdValidForCurrentSession:(id)arg1;
- (id)itemProviderForActivityWithAdamId:(id)arg1 previewMetadata:(id)arg2 existingItemProvider:(id)arg3;
- (id)itemProviderForActivityWithSharedWatchId:(id)arg1 sharedWatchUrl:(id)arg2 previewMetadata:(id)arg3 existingItemProvider:(id)arg4;
- (void)leaveSession;
- (void)playerDidStart:(id)arg1;
- (void)requestForegroundPresentation;
- (void)requestPermissionToStartCowatchingForPlayable:(id)arg1 completion:(id /* block */)arg2;
- (void)setIsSessionActive:(bool)arg1;
- (void)startPlaybackFailed;

@end
