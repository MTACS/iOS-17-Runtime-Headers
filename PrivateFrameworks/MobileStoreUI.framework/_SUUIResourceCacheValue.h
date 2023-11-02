
@interface _SUUIResourceCacheValue : NSObject {
    id  _requestCacheKey;
    id  _resource;
}

@property (nonatomic, readonly) id requestCacheKey;
@property (nonatomic, readonly) id resource;

- (void).cxx_destruct;
- (id)initWithResource:(id)arg1 requestCacheKey:(id)arg2;
- (id)requestCacheKey;
- (id)resource;

@end
