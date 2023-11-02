
@interface UITraitActiveAppearance : NSObject <UINSIntegerTraitDefinition, UITraitDefinitionPrivate>

+ (bool)_isPrivate;
+ (bool)affectsColorAppearance;
+ (long long)defaultValue;
+ (bool)defaultValueRepresentsUnspecified;
+ (id)identifier;
+ (id)name;

@end
