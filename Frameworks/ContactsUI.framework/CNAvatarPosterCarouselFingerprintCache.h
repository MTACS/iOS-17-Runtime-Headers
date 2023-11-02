
@interface CNAvatarPosterCarouselFingerprintCache : NSObject {
    CNCache * _cache;
}

@property (nonatomic, readonly) CNCache *cache;

+ (id)cacheKeyForContact:(id)arg1;
+ (id)cacheWithCapacity:(unsigned long long)arg1 resourceScheduler:(id)arg2;

- (void).cxx_destruct;
- (id)cache;
- (id)fingerprintForKey:(id)arg1;
- (id)init;
- (id)initWithCache:(id)arg1;
- (void)removeObjectForContact:(id)arg1;
- (void)setFingerprint:(id)arg1 forKey:(id)arg2;

@end
