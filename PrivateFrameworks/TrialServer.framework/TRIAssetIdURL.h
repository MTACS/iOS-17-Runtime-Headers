
@interface TRIAssetIdURL : NSObject <NSCopying> {
    NSString<TRIAssetId> * _assetId;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString<TRIAssetId> *assetId;
@property (nonatomic, readonly) NSURL *url;

+ (id)urlWithAssetId:(id)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)assetId;
- (id)copyWithReplacementAssetId:(id)arg1;
- (id)copyWithReplacementUrl:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetId:(id)arg1 url:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTourl:(id)arg1;
- (id)url;

@end
