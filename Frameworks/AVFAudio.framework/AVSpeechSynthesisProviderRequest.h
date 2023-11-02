
@interface AVSpeechSynthesisProviderRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _ssmlRepresentation;
    AVSpeechSynthesisProviderVoice * _voice;
}

@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic, retain) NSArray *channels;
@property (nonatomic, retain) TTSSpeechRequest *parentRequest;
@property (nonatomic, retain) NSString *ssmlRepresentation;
@property (nonatomic, copy) id /* block */ ttsServiceDidStartReplyBlock;
@property (nonatomic, retain) AVSpeechSynthesisProviderVoice *voice;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSMLRepresentation:(id)arg1 voice:(id)arg2;
- (void)setSsmlRepresentation:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)ssmlRepresentation;
- (id)voice;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (unsigned int)audioQueueFlags;
- (id)audioSession;
- (id)channels;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSMLRepresentation:(id)arg1 voice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentRequest;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setChannels:(id)arg1;
- (void)setParentRequest:(id)arg1;
- (void)setSsmlRepresentation:(id)arg1;
- (void)setTtsServiceDidStartReplyBlock:(id /* block */)arg1;
- (void)setVoice:(id)arg1;
- (id)ssmlRepresentation;
- (id /* block */)ttsServiceDidStartReplyBlock;
- (id)voice;

@end
