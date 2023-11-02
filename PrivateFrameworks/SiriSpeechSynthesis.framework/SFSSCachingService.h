
@interface SFSSCachingService : NSObject {
    NSCache * _memoryCache;
}

@property (nonatomic, retain) NSCache *memoryCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)memoryCache;
- (id)objectForKey:(id)arg1;
- (void)setMemoryCache:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
