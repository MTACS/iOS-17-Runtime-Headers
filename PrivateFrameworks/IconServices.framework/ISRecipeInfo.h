
@interface ISRecipeInfo : NSObject

+ (id)appRecipeForPlatform:(unsigned long long)arg1 descriptor:(id)arg2;
+ (id)documentRecipeForPlatform:(unsigned long long)arg1 descriptor:(id)arg2;
+ (id)genericRecipeWithAppliedDescriptorRecipeAttributes:(id)arg1;

@end
