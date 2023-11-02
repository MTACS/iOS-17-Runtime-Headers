
@interface SiriPlaybackControlIntents.MoveSpeakerIntentHandler : NSObject <MoveSpeakerIntentHandling> {
    void aceServiceHelper;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmMoveSpeaker:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMoveSpeaker:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDestinationsForMoveSpeaker:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSourceForMoveSpeaker:(id)arg1 withCompletion:(id /* block */)arg2;

@end
