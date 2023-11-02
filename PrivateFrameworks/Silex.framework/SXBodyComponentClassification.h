
@interface SXBodyComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (bool)accessibilitySkippedDuringReadAll;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)layoutRules;
- (id)textRules;

@end
