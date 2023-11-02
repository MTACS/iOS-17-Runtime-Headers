
@interface AVTInMemoryResourceCacheEntry : NSObject {
    <AVTCacheableResourceChangeToken> * _changeToken;
    unsigned long long  _cost;
    NSString * _key;
    <AVTCachedResource> * _resource;
}

@property (nonatomic, readonly) <AVTCacheableResourceChangeToken> *changeToken;
@property (nonatomic, readonly) unsigned long long cost;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) <AVTCachedResource> *resource;

- (void).cxx_destruct;
- (id)changeToken;
- (unsigned long long)cost;
- (void)dealloc;
- (id)description;
- (id)initWithResource:(id)arg1 changeToken:(id)arg2 key:(id)arg3 cost:(unsigned long long)arg4;
- (id)key;
- (id)resource;

@end
