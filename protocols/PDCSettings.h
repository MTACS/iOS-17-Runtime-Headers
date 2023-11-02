
@protocol PDCSettings <NSObject>

@required

- (long long)integerForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;

@end
