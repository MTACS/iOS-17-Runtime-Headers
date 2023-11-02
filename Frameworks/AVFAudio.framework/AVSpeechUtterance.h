
@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {
    NSAttributedString * _attributedSpeechString;
    float  _pitchMultiplier;
    double  _postUtteranceDelay;
    double  _preUtteranceDelay;
    bool  _prefersAssistiveTechnologySettings;
    float  _rate;
    NSString * _speechString;
    AVSpeechSynthesisVoice * _voice;
    float  _volume;
}

@property (nonatomic, retain) NSAttributedString *attributedSpeechString;
@property (nonatomic, copy) id /* block */ audioBufferCallback;
@property (getter=hasGeneratedSSML, nonatomic, readonly) bool generatedSSML;
@property (nonatomic, copy) id /* block */ markerCallback;
@property (nonatomic) float pitchMultiplier;
@property (nonatomic) double postUtteranceDelay;
@property (nonatomic) double preUtteranceDelay;
@property (nonatomic, retain) NSArray *prefersAssistiveTechnologyExceptions;
@property (nonatomic) bool prefersAssistiveTechnologySettings;
@property (nonatomic) bool processEmoticons;
@property (nonatomic) float rate;
@property (nonatomic, retain) NSString *speechString;
@property (nonatomic, retain) NSString *ssmlRepresentation;
@property (nonatomic, retain) AVSpeechSynthesisVoice *voice;
@property (nonatomic) float volume;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)initialize;
+ (id)speechUtteranceWithAttributedString:(id)arg1;
+ (id)speechUtteranceWithSSMLRepresentation:(id)arg1;
+ (id)speechUtteranceWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedSpeechString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSMLRepresentation:(id)arg1;
- (id)initWithString:(id)arg1;
- (float)pitchMultiplier;
- (double)postUtteranceDelay;
- (double)preUtteranceDelay;
- (bool)prefersAssistiveTechnologySettings;
- (float)rate;
- (void)setAttributedSpeechString:(id)arg1;
- (void)setPitchMultiplier:(float)arg1;
- (void)setPostUtteranceDelay:(double)arg1;
- (void)setPreUtteranceDelay:(double)arg1;
- (void)setPrefersAssistiveTechnologySettings:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setSpeechString:(id)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (id)voice;
- (float)volume;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (id)speechUtteranceWithAttributedString:(id)arg1;
+ (id)speechUtteranceWithSSMLRepresentation:(id)arg1;
+ (id)speechUtteranceWithString:(id)arg1;
+ (void)transformUtteranceBasedOnSSMLIfDetected:(id)arg1;

- (id)action;
- (id /* block */)audioBufferCallback;
- (id)description;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithSSMLRepresentation:(id)arg1;
- (id)initWithString:(id)arg1;
- (id /* block */)markerCallback;
- (id)prefersAssistiveTechnologyExceptions;
- (bool)processEmoticons;
- (void)setAction:(id)arg1;
- (void)setAudioBufferCallback:(id /* block */)arg1;
- (void)setMarkerCallback:(id /* block */)arg1;
- (void)setPrefersAssistiveTechnologyExceptions:(id)arg1;
- (void)setProcessEmoticons:(bool)arg1;
- (void)setSsmlRepresentation:(id)arg1;
- (id)ssmlRepresentation;

@end
