
@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding> {
    double  _confidenceScore;
}

@property (nonatomic, readonly) double confidenceScore;

+ (bool)supportsSecureCoding;

- (id)_descriptionExtra;
- (double)confidenceScore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 removeSpaceBefore:(bool)arg2 removeSpaceAfter:(bool)arg3 confidenceScore:(double)arg4;
- (bool)isEqual:(id)arg1;

@end
