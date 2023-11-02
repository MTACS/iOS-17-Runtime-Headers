
@interface SiriAudioInternal.INPlayMediaIntentHandler : NSObject <INPlayMediaIntentHandling> {
    void accountProvider;
    void appleMediaServicesProvider;
    void deviceProvider;
    void deviceState;
    void featureFlagProvider;
    void localSearch;
    void nearDeviceProvider;
    void nowPlaying;
    void playbackService;
    void seDeviceProvider;
    void siriKitTaskLoggingProvider;
    void subscriptionProvider;
}

- (void).cxx_destruct;
- (void)handlePlayMedia:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveMediaItemsForPlayMedia:(id)arg1 withCompletion:(id /* block */)arg2;

@end
