
@interface SATTSSpeechSynthesisStreamingChunk : SATTSSpeechSynthesisStreaming

@property (nonatomic, copy) NSData *audioData;
@property (nonatomic, retain) SATTSSpeechSynthesisAudioInfo *audioInfo;
@property (nonatomic) long long index;

+ (id)speechSynthesisStreamingChunk;
+ (id)speechSynthesisStreamingChunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioData;
- (id)audioInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)index;
- (bool)requiresResponse;
- (void)setAudioData:(id)arg1;
- (void)setAudioInfo:(id)arg1;
- (void)setIndex:(long long)arg1;

@end
