
@interface GKResourceRequest : NSObject {
    <NSObject> * _cacheKey;
    <NSObject><NSCopying> * _requestKey;
}

@property (nonatomic, copy) <NSObject> *cacheKey;
@property (nonatomic, readonly) unsigned long long cacheOptions;
@property (nonatomic, copy) <NSObject><NSCopying> *requestKey;

+ (id)makeUniqueKey;

- (void).cxx_destruct;
- (id)cacheKey;
- (unsigned long long)cacheOptions;
- (id)description;
- (void)didLoadResource:(id)arg1 error:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)makeLoadOperation;
- (id)requestKey;
- (void)setCacheKey:(id)arg1;
- (void)setRequestKey:(id)arg1;

@end
