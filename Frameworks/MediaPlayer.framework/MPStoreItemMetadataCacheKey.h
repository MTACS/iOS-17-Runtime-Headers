
@interface MPStoreItemMetadataCacheKey : NSObject <NSCopying> {
    NSNumber * _accountIdentifier;
    NSNumber * _enqueuerAccountIdentifier;
    bool  _personalized;
    NSString * _storefrontIdentifier;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSNumber *enqueuerAccountIdentifier;
@property (getter=isPersonalized, nonatomic) bool personalized;
@property (nonatomic, copy) NSString *storefrontIdentifier;

+ (void)_fastGetCacheKeyWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_slowGetCacheKeyWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCacheKeyWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_isGoodCacheKey;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enqueuerAccountIdentifier;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPersonalized;
- (void)setAccountIdentifier:(id)arg1;
- (void)setEnqueuerAccountIdentifier:(id)arg1;
- (void)setPersonalized:(bool)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (id)storefrontIdentifier;

@end
