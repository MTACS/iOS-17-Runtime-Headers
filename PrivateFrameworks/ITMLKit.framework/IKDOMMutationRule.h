
@interface IKDOMMutationRule : IKDOMConditional {
    bool  _mutable;
}

@property (getter=isMutable, nonatomic, readonly) bool mutable;

+ (id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)mutationRuleWithDOMElement:(id)arg1 mutable:(bool)arg2;

- (void)applyOnDOMElement:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithDOMElement:(id)arg1 mutable:(bool)arg2;
- (bool)isMutable;

@end
