
@interface TextToSpeechVoiceBankingSupport.TTSVBAudioService : NSObject {
    void $__lazy_storage_$_audioEngine;
    void $__lazy_storage_$_playbackPlayer;
    void audioIOQueue;
    void audioPlayerNode;
    void audioQueue;
    void audioSession;
    void cachedSoundEffects;
    void calloutQueue;
    void cancellables;
    void numberOfAudioMagnitudes;
    void speechRecognitionService;
    void state;
}

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
