
@protocol GCUserDefaults <NSObject>

@required

- (void)addObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (bool)boolForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 context:(void*)arg3;
- (void)setBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1;

@end
