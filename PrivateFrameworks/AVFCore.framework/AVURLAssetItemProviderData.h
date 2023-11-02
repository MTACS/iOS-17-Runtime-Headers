
@interface AVURLAssetItemProviderData : NSObject <NSSecureCoding> {
    NSDictionary * _assetInitializationOptions;
    NSSecurityScopedURLWrapper * _securityScopedURLWrapper;
}

@property (nonatomic, readonly) NSDictionary *assetInitializationOptions;
@property (nonatomic, readonly) NSURL *securityScopedURL;

+ (id)itemProviderDataWithURL:(id)arg1 assetInitializationOptions:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)assetInitializationOptions;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 assetInitializationOptions:(id)arg2;
- (id)securityScopedURL;

@end
