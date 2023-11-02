
@interface UITraitInteractionModel : NSObject <UINSUIntegerTraitDefinition, UITraitDefinitionPrivate>

+ (bool)_isPrivate;
+ (bool)affectsColorAppearance;
+ (unsigned long long)defaultValue;
+ (bool)defaultValueRepresentsUnspecified;
+ (id)identifier;
+ (id)name;

@end
