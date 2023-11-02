
@protocol DDSCacheDelegate <NSObject>

@required

- (void)cache:(DDSCache *)arg1 willEvictObjects:(NSArray *)arg2;

@end
