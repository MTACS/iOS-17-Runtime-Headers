
@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {
    NSOrderedSet * _candidates;
    NSString * _title;
}

@property (copy) NSOrderedSet *candidates;
@property (copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1;
- (id)candidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlternativeText;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCandidates;
- (void)setCandidates:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
