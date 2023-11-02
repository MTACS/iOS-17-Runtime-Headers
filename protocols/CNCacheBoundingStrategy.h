
@protocol CNCacheBoundingStrategy <NSObject>

@required

- (bool)shouldEvictKey:(id <NSCopying>)arg1;
- (void)willAccessKey:(id <NSCopying>)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id <NSCopying>)arg2 keysToEvict:(id*)arg3;

@end
