
@interface SXDefaultMosaicGalleryComponentClassification : SXComponentClassification

+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (id)accessibilityContextualLabel;
- (Class)componentModelClass;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)layoutRules;

@end
