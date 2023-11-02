
@protocol MULRUCacheDelegate <NSObject>

@required

- (void)lruCache:(MULRUCache *)arg1 willEvictObject:(id)arg2 forKey:(id <NSCopying>)arg3;

@end
