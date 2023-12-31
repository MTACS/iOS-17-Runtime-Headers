
@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {
    NSArray * _alternativeStrings;
}

+ (bool)supportsSecureCoding;

- (id)alternativeStrings;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;

@end
