
@interface HRERecommendableObjectTypeRule : HRERecommendableObjectRule {
    NSString * _requiredType;
}

@property (nonatomic, readonly) NSString *requiredType;

+ (id)ruleWithRequiredType:(id)arg1;

- (void).cxx_destruct;
- (id)initWithRequiredType:(id)arg1;
- (bool)passesWithHomeObjects:(id)arg1;
- (bool)passesWithObject:(id)arg1;
- (id)requiredType;

@end
