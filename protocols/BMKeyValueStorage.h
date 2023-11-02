
@protocol BMKeyValueStorage <BMFlexibleSimpleKeyValueStorage>

@required

- (void)deleteValueForKey:(NSString *)arg1;
- (<NSCoding> *)fetchValueForKey:(NSString *)arg1;
- (void)insertValue:(id <NSCoding>)arg1 forKey:(NSString *)arg2;

@end
