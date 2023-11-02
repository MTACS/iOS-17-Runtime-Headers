
@interface CPAccNavUpdate : NSObject

+ (id)_descriptionArray:(id)arg1 resolveEnums:(bool)arg2 showNils:(bool)arg3 prefix:(id)arg4;
+ (id)_dictionaryFormat:(id)arg1 resolveEnums:(bool)arg2;
+ (id)_formattedDistanceString:(double)arg1;
+ (void)_update:(id)arg1 resetValueForParameter:(id)arg2;
+ (id)_valueFromCollection:(id)arg1 forParamKey:(id)arg2;
+ (id)_valueFromMeasurement:(id)arg1 forParamKey:(id)arg2;
+ (id)accNavInfoWithUpdate:(id)arg1 component:(id)arg2 customValueBlock:(id /* block */)arg3;
+ (id)accNavParameterKeysIndexedForUpdate:(Class)arg1;
+ (id)accNavParametersIndexedForUpdate:(Class)arg1;
+ (void)configureTypesForUpdateClass:(Class)arg1;
+ (id)copyUpdate:(id)arg1;
+ (void)decodeUpdate:(id)arg1 withCoder:(id)arg2;
+ (id)description:(id)arg1;
+ (id)dictionaryIAPFormat:(id)arg1;
+ (id)dictionaryStringFormat:(id)arg1;
+ (void)encodeUpdate:(id)arg1 withCoder:(id)arg2;
+ (void)enumerateUpdate:(id)arg1 paramKeysAndValuesWithBlock:(id /* block */)arg2;
+ (void)enumerateUpdate:(id)arg1 paramsAndValuesWithBlock:(id /* block */)arg2;
+ (void)enumerateUpdateClass:(Class)arg1 paramKeysWithBlock:(id /* block */)arg2;
+ (void)enumerateUpdateClass:(Class)arg1 paramsWithBlock:(id /* block */)arg2;
+ (id)iapDescription:(id)arg1;
+ (bool)isUpdate:(id)arg1 equalTo:(id)arg2;
+ (void)resetUpdate:(id)arg1;
+ (void)update:(id)arg1 resetValueForProperty:(id)arg2;
+ (id)update:(id)arg1 valueForKey:(unsigned short)arg2;
+ (id)update:(id)arg1 valueForParam:(id)arg2;
+ (id)update:(id)arg1 valueForParamKey:(id)arg2;
+ (id)update:(id)arg1 valueForProperty:(id)arg2;
+ (id)updateClass:(Class)arg1 paramForProperty:(id)arg2;
+ (id)updateClass:(Class)arg1 paramKeyForKey:(unsigned short)arg2;

@end
