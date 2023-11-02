
@interface RMStoreUnresolvedAsset : NSObject <NSSecureCoding> {
    NSString * _assetIdentifier;
    NSURL * _downloadURL;
    NSString * _extensionToken;
    NSDictionary * _queryParameters;
    long long  _resolveAs;
}

@property (nonatomic, readonly, copy) NSString *assetIdentifier;
@property (nonatomic, readonly, copy) NSURL *downloadURL;
@property (nonatomic, copy) NSString *extensionToken;
@property (nonatomic, readonly, copy) NSDictionary *queryParameters;
@property (nonatomic, readonly) long long resolveAs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addExtensionToken:(id)arg1;
- (id)assetIdentifier;
- (id)downloadURL;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionToken;
- (id)initWithAsset:(id)arg1 queryParameters:(id)arg2;
- (id)initWithAsset:(id)arg1 queryParameters:(id)arg2 downloadURL:(id)arg3;
- (id)initWithAssetIdentifier:(id)arg1 queryParameters:(id)arg2;
- (id)initWithAssetIdentifier:(id)arg1 queryParameters:(id)arg2 downloadURL:(id)arg3;
- (id)initWithAssetIdentifier:(id)arg1 resolveAs:(long long)arg2 queryParameters:(id)arg3 downloadURL:(id)arg4 extensionToken:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUnresolvedAsset:(id)arg1;
- (id)queryParameters;
- (long long)resolveAs;
- (void)setExtensionToken:(id)arg1;

@end
