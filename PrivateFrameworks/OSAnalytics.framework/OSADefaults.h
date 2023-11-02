
@interface OSADefaults : NSObject

+ (bool)boolForKey:(id)arg1;
+ (id)dictionaryRepresentation;
+ (id)objectForKey:(id)arg1;
+ (void)removeObjectForKey:(id)arg1;
+ (void)sendOperation:(unsigned long long)arg1 forKey:(id)arg2 withBlock:(id /* block */)arg3;
+ (void)setBool:(bool)arg1 forKey:(id)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2;

@end
