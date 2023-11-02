
@protocol _CDStringKeyDataValueStoring

@required

- (NSArray *)allKeys;
- (NSData *)dataForKey:(NSString *)arg1;
- (bool)removeDataForKey:(NSString *)arg1;
- (bool)removeDataForKeys:(NSArray *)arg1;
- (bool)setData:(NSData *)arg1 forKey:(NSString *)arg2;

@end
