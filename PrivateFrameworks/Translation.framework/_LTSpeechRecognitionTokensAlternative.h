
@interface _LTSpeechRecognitionTokensAlternative : NSObject <NSSecureCoding> {
    long long  _confidence;
    bool  _hasSpaceAfter;
    bool  _lowConfidence;
    NSString * _text;
}

@property (nonatomic) long long confidence;
@property (nonatomic) bool hasSpaceAfter;
@property (getter=isLowConfidence, nonatomic) bool lowConfidence;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)confidence;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSpaceAfter;
- (id)initWithCoder:(id)arg1;
- (bool)isLowConfidence;
- (void)setConfidence:(long long)arg1;
- (void)setHasSpaceAfter:(bool)arg1;
- (void)setLowConfidence:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
