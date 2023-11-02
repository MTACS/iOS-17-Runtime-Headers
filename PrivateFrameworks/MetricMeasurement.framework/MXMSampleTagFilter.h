
@interface MXMSampleTagFilter : MXMSampleTag <NSCopying, NSSecureCoding> {
    bool  _allowDescendents;
    NSSet * _tagPermutations;
}

@property (nonatomic, readonly) bool finite;
@property (getter=finite, nonatomic, readonly) bool isFinite;
@property (nonatomic, copy) NSSet *tagPermutations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)finite;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 allowDescendents:(bool)arg2;
- (bool)matchesSampleWithTag:(id)arg1;
- (void)setTagPermutations:(id)arg1;
- (id)tagPermutations;

@end
