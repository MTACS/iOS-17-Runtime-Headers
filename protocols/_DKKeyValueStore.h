
@protocol _DKKeyValueStore <_DKSimpleKeyValueStore>

@required

- (NSArray *)arrayForKey:(NSString *)arg1;
- (bool)boolForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDate *)dateForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (NSObject *)objectForKey:(NSString *)arg1 havingClass:(Class)arg2;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setArray:(NSArray *)arg1 forKey:(NSString *)arg2;
- (void)setBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (void)setDate:(NSDate *)arg1 forKey:(NSString *)arg2;
- (void)setDictionary:(NSDictionary *)arg1 forKey:(NSString *)arg2;
- (void)setNumber:(NSNumber *)arg1 forKey:(NSString *)arg2;
- (void)setObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1;

@end
