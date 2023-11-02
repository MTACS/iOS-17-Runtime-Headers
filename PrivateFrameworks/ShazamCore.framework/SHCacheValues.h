
@interface SHCacheValues : NSObject {
    NSDictionary * _cacheValues;
}

@property (nonatomic, readonly) NSDictionary *cacheValues;
@property (nonatomic, readonly) long long lookupMaxAge;

- (void).cxx_destruct;
- (id)cacheValues;
- (id)initWithValues:(id)arg1;
- (long long)lookupMaxAge;

@end
