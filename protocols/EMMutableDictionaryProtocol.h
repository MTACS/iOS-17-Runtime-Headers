
@protocol EMMutableDictionaryProtocol <NSObject>

@required

- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id <NSCopying>)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;

@end
