
@protocol PUTransientDisplayAsset <PUDisplayAsset>

@required

- (NSString *)burstIdentifier;
- (bool)isHDR;
- (unsigned long long)numberOfRepresentedAssets;
- (NSURL *)persistenceURL;
- (UIImage *)placeholderImage;

@end
