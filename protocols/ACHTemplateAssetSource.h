
@protocol ACHTemplateAssetSource <NSObject>

@required

- (NSString *)identifier;
- (NSURL *)localizationBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)propertyListBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)resourceBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)stickerBundleURLForTemplate:(ACHTemplate *)arg1;

@optional

- (NSObject<ACHTemplateAssetSourceDelegate> *)assetSourceDelegate;
- (NSDictionary *)customPlaceholderValuesForTemplate:(ACHTemplate *)arg1 error:(id*)arg2;
- (long long)mobileAssetVersionForTemplate:(ACHTemplate *)arg1;
- (void)setAssetSourceDelegate:(NSObject<ACHTemplateAssetSourceDelegate> *)arg1;

@end
