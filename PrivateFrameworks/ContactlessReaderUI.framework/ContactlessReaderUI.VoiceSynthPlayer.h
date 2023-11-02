
@interface ContactlessReaderUI.VoiceSynthPlayer : NSObject <AVSpeechSynthesizerDelegate> {
    void audioModeSet;
    void audioPlayerDelegate;
    void hashText;
    void safeguardTimer;
    void speakingState;
    void stopInDelay;
    void synthesizerVoice;
    void voiceSynthesizer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;

@end
