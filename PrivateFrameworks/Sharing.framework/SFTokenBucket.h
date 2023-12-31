
@interface SFTokenBucket : NSObject {
    unsigned long long  _bucketSize;
    unsigned long long  _lastRefreshTicks;
    unsigned long long  _tokenDurationTicks;
    unsigned long long  _tokensAvailable;
}

- (bool)acquireToken;
- (id)init;
- (id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2;
- (id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2;
- (id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2;

@end
