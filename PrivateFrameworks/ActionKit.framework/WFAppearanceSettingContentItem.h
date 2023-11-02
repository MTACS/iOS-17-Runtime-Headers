
@interface WFAppearanceSettingContentItem : WFContentItem

@property (nonatomic, readonly) WFAppearanceSettingValue *settingValue;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (id)settingValue;

@end
