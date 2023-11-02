
@interface EARSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSArray * _preITNTokens;
    NSArray * _preITNVoiceCommandInterpretations;
    NSArray * _tokens;
    NSArray * _voiceCommandInterpretations;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSArray *preITNTokens;
@property (nonatomic, readonly, copy) NSArray *preITNVoiceCommandInterpretations;
@property (nonatomic, readonly, copy) NSArray *tokens;
@property (nonatomic, readonly, copy) NSArray *voiceCommandInterpretations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)preITNTokens;
- (id)preITNVoiceCommandInterpretations;
- (id)tokens;
- (id)voiceCommandInterpretations;

@end
