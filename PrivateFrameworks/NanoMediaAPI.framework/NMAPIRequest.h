
@interface NMAPIRequest : MPStoreModelRequest {
    unsigned long long  _cachePolicy;
    NSURL * _cacheURL;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic, retain) NSURL *cacheURL;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (void).cxx_destruct;
- (unsigned long long)cachePolicy;
- (id)cacheURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (Class)responseParserClass;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setCacheURL:(id)arg1;
- (void)setDefaultMusicRequestProperties;
- (void)setEditorialRequestProperties;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
