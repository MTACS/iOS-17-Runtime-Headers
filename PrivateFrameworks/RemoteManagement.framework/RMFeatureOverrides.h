
@interface RMFeatureOverrides : NSObject

+ (id)arrayForDefaultsKey:(id)arg1;
+ (long long)batteryHealthServiceStateWithDefaultValue:(long long)arg1;
+ (bool)boolForDefaultsKey:(id)arg1;
+ (id)bootstrapURL;
+ (id)defaultOverrideForKey:(id)arg1;
+ (id)dictionaryForDefaultsKey:(id)arg1;
+ (id)hiddenDeclarationTypes;
+ (bool)internalStatusForKey:(id)arg1 defaultBool:(bool)arg2;
+ (id)internalStatusForKey:(id)arg1 defaultValue:(id)arg2;
+ (id)numberForDefaultsKey:(id)arg1;
+ (bool)permissiveURLSchemes;
+ (bool)qaMode;
+ (id)stringForDefaultsKey:(id)arg1;
+ (bool)testBooleanValue;
+ (bool)useHTTPLogging;

@end
