
@interface _NSInflectionRuleExplicit : NSInflectionRule {
    long long  _agreeWithArgument;
    long long  _agreeWithConcept;
    NSMorphology * _morphology;
    long long  _referentConcept;
}

@property (nonatomic, readonly) long long agreeWithArgument;
@property (nonatomic, readonly) long long agreeWithConcept;
@property (readonly, copy) NSMorphology *morphology;
@property (nonatomic, readonly) long long referentConcept;

- (long long)agreeWithArgument;
- (long long)agreeWithConcept;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAttributesDictionary:(id)arg1;
- (id)initWithMorphology:(id)arg1 agreeWithArgument:(long long)arg2 agreeWithConcept:(long long)arg3 referentConcept:(long long)arg4;
- (bool)isAutomatic;
- (bool)isEqual:(id)arg1;
- (id)morphology;
- (long long)referentConcept;

@end
