
@interface NSInflectionRuleExplicit : NSInflectionRule {
    NSMorphology * _morphology;
}

@property (readonly, copy) NSMorphology *morphology;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMorphology:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)morphology;

@end
