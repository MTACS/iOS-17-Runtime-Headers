
@interface SXCaptionComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (id)accessibilityContextualLabel;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)textRules;

@end
