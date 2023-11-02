
@protocol PDSKVStore <NSObject>

@required

- (NSDictionary *)allStoredValues;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (void)setNumber:(NSNumber *)arg1 forKey:(NSString *)arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1;

@end
