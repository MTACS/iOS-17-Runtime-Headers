
@interface AFSpeechUtterance : NSObject <NSSecureCoding> {
    long long  _confidenceScore;
    AFSpeechInterpretation * _interpretation;
    NSArray * _interpretationIndices;
    long long  _source;
}

@property (nonatomic) long long confidenceScore;
@property (nonatomic, readonly, copy) AFSpeechInterpretation *interpretation;
@property (nonatomic, copy) NSArray *interpretationIndices;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)confidenceScore;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2 interpretation:(id)arg3;
- (id)interpretation;
- (id)interpretationIndices;
- (bool)isEqual:(id)arg1;
- (void)setConfidenceScore:(long long)arg1;
- (void)setInterpretationIndices:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
