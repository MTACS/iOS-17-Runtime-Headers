
@interface NewsUI2.AudioFeedInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void commandCenter;
    void dataManager;
    void delegate;
    void modifierFactory;
    void offlineManager;
    void pipeline;
    void playbackState;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
