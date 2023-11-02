
@interface PIParallaxStyleRecipeArchiver : NSObject

+ (id)_deserializeFilterDefinition:(id)arg1 version:(unsigned long long)arg2 error:(out id*)arg3;
+ (id)_deserializeFilterDefinitions:(id)arg1 version:(unsigned long long)arg2 error:(out id*)arg3;
+ (id)_deserializeParameter:(id)arg1 version:(unsigned long long)arg2 error:(out id*)arg3;
+ (id)_deserializeParameters:(id)arg1 version:(unsigned long long)arg2 error:(out id*)arg3;
+ (id)_serializeDefinition:(id)arg1;
+ (id)_serializeFilters:(id)arg1;
+ (id)_serializeParameter:(id)arg1;
+ (id)_serializeParameters:(id)arg1;
+ (id)deserializeRecipe:(id)arg1 error:(out id*)arg2;
+ (id)serializeRecipe:(id)arg1;
+ (id)unarchivedStyleRecipeWithURL:(id)arg1 error:(out id*)arg2;
+ (bool)writeRecipe:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;

@end
