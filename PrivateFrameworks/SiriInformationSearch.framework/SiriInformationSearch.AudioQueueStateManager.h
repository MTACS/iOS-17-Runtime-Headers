
@interface SiriInformationSearch.AudioQueueStateManager : NSObject <SOMediaNowPlayingListening> {
    void applicationBundleIdentifierCache;
    void isObserverRegistered;
    void lock;
    void nowPlayingInfoCache;
    void queueStateCache;
    void queueStateObserver;
    void updateAudioQueueStateCacheGroup;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)nowPlayingObserver:(id)arg1 playbackStateDidChangeFrom:(long long)arg2 to:(long long)arg3 lastPlayingDate:(id)arg4;

@end
