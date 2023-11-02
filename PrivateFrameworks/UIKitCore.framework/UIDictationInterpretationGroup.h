
@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding> {
    NSArray * _interpretations;
    bool  _isLowConfidence;
}

@property (nonatomic, readonly) double bestConfidenceScore;
@property (nonatomic, readonly) UIDictationInterpretation *bestInterpretation;
@property (nonatomic, readonly) NSArray *interpretations;
@property (nonatomic, readonly) bool isLowConfidence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)bestConfidenceScore;
- (id)bestInterpretation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(bool)arg2;
- (id)interpretations;
- (bool)isLowConfidence;

@end
