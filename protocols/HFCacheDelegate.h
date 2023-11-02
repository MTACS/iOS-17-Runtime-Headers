
@protocol HFCacheDelegate <NSObject>

@optional

- (void)cache:(HFCache *)arg1 didEvictObject:(id)arg2 forKey:(id)arg3 cost:(unsigned long long)arg4;

@end
