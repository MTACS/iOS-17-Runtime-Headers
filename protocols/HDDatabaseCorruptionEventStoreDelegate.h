
@protocol HDDatabaseCorruptionEventStoreDelegate

@required

- (id)store:(HDDatabaseCorruptionEventStore *)arg1 objectForKey:(NSString *)arg2;
- (void)store:(HDDatabaseCorruptionEventStore *)arg1 setObject:(id)arg2 forKey:(NSString *)arg3;

@end
