
@interface SXIllustratorComponentClassification : SXDefaultTextComponentClassification

+ (id)accessibilityContextualLabel;
+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)textRules;

@end
