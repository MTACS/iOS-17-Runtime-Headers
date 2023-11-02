
@interface TextToSpeech.VoiceTaggedSSMLSnippet : NSObject {
    void ssml;
    void voice;
}

@property (nonatomic, copy) NSString *ssml;
@property (nonatomic, copy) NSString *voice;

- (void).cxx_destruct;
- (id)init;
- (void)setSsml:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)ssml;
- (id)voice;

@end
