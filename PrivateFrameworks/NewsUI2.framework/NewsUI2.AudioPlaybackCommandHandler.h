
@interface NewsUI2.AudioPlaybackCommandHandler : NSObject <FCBundleSubscriptionChangeObserver> {
    void audioPlaybackTracker;
    void bundleSubscriptionManager;
    void commandCenter;
    void dataManager;
    void offlineAlertControllerFactory;
    void offlineArticleManager;
    void offlineManager;
    void playbackConductor;
    void playbackQueue;
    void resumeSlot;
    void sceneProvider;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
