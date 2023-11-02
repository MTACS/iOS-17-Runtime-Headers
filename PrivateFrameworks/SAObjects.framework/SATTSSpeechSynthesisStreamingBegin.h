
@interface SATTSSpeechSynthesisStreamingBegin : SATTSSpeechSynthesisStreaming

@property (nonatomic, retain) SAUIAudioDescription *decoderStreamDescription;
@property (nonatomic, retain) SAUIAudioDescription *playerStreamDescription;
@property (nonatomic, retain) SATTSSpeechSynthesisResource *speechSynthesisResource;
@property (nonatomic, retain) SATTSSpeechSynthesisVoice *speechSynthesisVoice;
@property (nonatomic) float streamingPlaybackBufferSize;
@property (nonatomic, copy) NSString *text;

+ (id)speechSynthesisStreamingBegin;
+ (id)speechSynthesisStreamingBeginWithDictionary:(id)arg1 context:(id)arg2;

- (id)decoderStreamDescription;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playerStreamDescription;
- (bool)requiresResponse;
- (void)setDecoderStreamDescription:(id)arg1;
- (void)setPlayerStreamDescription:(id)arg1;
- (void)setSpeechSynthesisResource:(id)arg1;
- (void)setSpeechSynthesisVoice:(id)arg1;
- (void)setStreamingPlaybackBufferSize:(float)arg1;
- (void)setText:(id)arg1;
- (id)speechSynthesisResource;
- (id)speechSynthesisVoice;
- (float)streamingPlaybackBufferSize;
- (id)text;

@end
