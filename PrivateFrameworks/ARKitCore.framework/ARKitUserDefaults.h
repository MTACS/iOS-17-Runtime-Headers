
@interface ARKitUserDefaults : NSObject

+ (id)_numberForObject:(id)arg1;
+ (bool)boolForKey:(id)arg1;
+ (bool)boolForKey:(id)arg1 useCache:(bool)arg2;
+ (void)cacheObject:(id)arg1 forKey:(id)arg2;
+ (id)cachedObjectForKey:(id)arg1;
+ (void)clearUserDefaultsCache;
+ (id)defaultValues;
+ (double)doubleForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1 useCache:(bool)arg2;
+ (float)floatForKey:(id)arg1;
+ (float)floatForKey:(id)arg1 useCache:(bool)arg2;
+ (long long)integerForKey:(id)arg1;
+ (long long)integerForKey:(id)arg1 useCache:(bool)arg2;
+ (id)keysApprovedForProcessEnvironmentOverride;
+ (id)listForKey:(id)arg1;
+ (id)numberForKey:(id)arg1;
+ (id)numberForKey:(id)arg1 useCache:(bool)arg2;
+ (id)objectForKey:(id)arg1;
+ (id)objectForKey:(id)arg1 useCache:(bool)arg2;
+ (id)objectForKeySlow:(id)arg1;
+ (void)removeAllKeys;
+ (void)removeCachedObjectForKey:(id)arg1;
+ (void)removeObjectForKey:(id)arg1;
+ (id)resolutionDictionaryForKey:(id)arg1;
+ (void)setBool:(bool)arg1 forKey:(id)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (bool)shouldUseCache;
+ (id)stringForKey:(id)arg1;
+ (void)synchronize;
+ (id)userDefaultsCache;
+ (id)valueForKey:(id)arg1;

@end
