
@protocol _DKSimpleKeyValueStore

@required

- (NSObject *)objectForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;

@end
