
@interface TextToSpeech.SSMLVoiceTagger : NSObject {
    void currentVoice;
    void defaultVoice;
    void leafPiles;
    void resolveVoice;
    void voiceForLanguage;
    void voiceTagRanges;
}

- (void).cxx_destruct;
- (id)init;
- (id)init:(id)arg1 voiceForLanguage:(id /* block */)arg2 resolveVoice:(id /* block */)arg3;
- (id)tagSSML:(id)arg1;

@end
