
@protocol MCMCache <NSObject>

@required

- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
