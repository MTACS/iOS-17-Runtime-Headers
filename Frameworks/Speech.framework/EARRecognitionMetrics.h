
@interface EARRecognitionMetrics : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _allItnRunIntervals;
    double  _cpuMillionInstructionsPerSecond;
    bool  _isEmojiDisambiguationUsed;
    bool  _isEmojiExpectedButNotRecognized;
    bool  _isEmojiPersonalizationUsed;
    NSNumber * _itnDurationInNs;
    NSArray * _pauseDurations;
    NSArray * _recognizedEmojis;
}

@property (nonatomic, copy) NSArray *allItnRunIntervals;
@property (nonatomic, readonly) double cpuMillionInstructionsPerSecond;
@property (nonatomic, readonly) bool isEmojiDisambiguationUsed;
@property (nonatomic, readonly) bool isEmojiExpectedButNotRecognized;
@property (nonatomic, readonly) bool isEmojiPersonalizationUsed;
@property (nonatomic, readonly) NSNumber *itnDurationInNs;
@property (nonatomic, readonly, copy) NSArray *pauseDurations;
@property (nonatomic, readonly, copy) NSArray *recognizedEmojis;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allItnRunIntervals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cpuMillionInstructionsPerSecond;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognitionMetrics:(id)arg1 cpuInstructions:(double)arg2;
- (bool)isEmojiDisambiguationUsed;
- (bool)isEmojiExpectedButNotRecognized;
- (bool)isEmojiPersonalizationUsed;
- (id)itnDurationInNs;
- (id)pauseDurations;
- (id)recognizedEmojis;
- (void)setAllItnRunIntervals:(id)arg1;

@end
