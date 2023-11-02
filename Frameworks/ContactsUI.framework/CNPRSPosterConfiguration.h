
@interface CNPRSPosterConfiguration : NSObject {
    NSURL * _assetDirectory;
    PRSPosterConfiguration * _wrappedPosterConfiguration;
}

@property (nonatomic, copy) NSURL *assetDirectory;
@property (nonatomic, readonly, copy) NSString *providerBundleIdentifier;
@property (nonatomic, readonly, copy) PRSPosterConfiguration *wrappedPosterConfiguration;

- (void).cxx_destruct;
- (id)assetDirectory;
- (id)initWithPosterConfiguration:(id)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)providerBundleIdentifier;
- (id)serverUUID;
- (void)setAssetDirectory:(id)arg1;
- (id)wrappedPosterConfiguration;

@end
