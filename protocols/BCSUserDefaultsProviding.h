
@protocol BCSUserDefaultsProviding <NSObject>

@required

- (bool)boolForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1;

@end
