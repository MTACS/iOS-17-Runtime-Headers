
@interface MLParameterUtils : NSObject

+ (void)appendParameterDescriptions:(id)arg1 toModelDescription:(id)arg2;
+ (id)deScopeParameters:(id)arg1 byDeletingPrefixingScope:(id)arg2;
+ (id)numberForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)objectForKey:(id)arg1 class:(Class)arg2 dictionary:(id)arg3;
+ (id)stringForKey:(id)arg1 inDictionary:(id)arg2;

@end
