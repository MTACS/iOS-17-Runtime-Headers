
@interface EDRemoteContentCacheConfiguration : NSObject {
    NSURL * _cacheURL;
    unsigned long long  _diskCapacity;
}

@property (nonatomic, readonly) NSURL *cacheURL;
@property (nonatomic, readonly) unsigned long long diskCapacity;

- (void).cxx_destruct;
- (id)_cacheURLWithBaseURL:(id)arg1;
- (id)cacheURL;
- (unsigned long long)diskCapacity;
- (id)initWithBaseURL:(id)arg1 diskCapacity:(unsigned long long)arg2;

@end
