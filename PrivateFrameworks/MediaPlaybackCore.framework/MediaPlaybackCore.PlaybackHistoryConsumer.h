
@interface MediaPlaybackCore.PlaybackHistoryConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    void playbackEngine;
    void subscription;
}

+ (id)identifier;

- (void).cxx_destruct;
- (id)init;
- (void)subscribeToEventStream:(id)arg1;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
