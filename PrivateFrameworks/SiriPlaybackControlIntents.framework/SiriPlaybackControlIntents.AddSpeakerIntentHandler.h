
@interface SiriPlaybackControlIntents.AddSpeakerIntentHandler : NSObject <AddSpeakerIntentHandling> {
    void aceServiceHelper;
    void deviceSelector;
    void deviceState;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmAddSpeaker:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAddSpeaker:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDestinationsForAddSpeaker:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSourceForAddSpeaker:(id)arg1 withCompletion:(id /* block */)arg2;

@end
