
@interface SXAdvertisementComponentClassification : SXComponentClassification

+ (int)role;
+ (id)roleString;
+ (id)typeString;

- (Class)componentModelClass;
- (bool)isCollapsible;
- (id)layoutRules;

@end
