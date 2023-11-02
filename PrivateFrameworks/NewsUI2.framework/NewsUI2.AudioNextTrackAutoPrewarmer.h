
@interface NewsUI2.AudioNextTrackAutoPrewarmer : NSObject <FCBundleSubscriptionChangeObserver> {
    void articleAudioPrewarmer;
    void audioPlaybackQueue;
    void bundleSubscriptionManager;
    void prewarming;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
