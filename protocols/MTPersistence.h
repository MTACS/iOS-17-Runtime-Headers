
@protocol MTPersistence <NSObject>

@required

- (float)floatForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1 defaultValue:(id)arg2;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (void)synchronize;

@end
