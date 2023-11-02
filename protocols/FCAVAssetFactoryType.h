
@protocol FCAVAssetFactoryType <NSObject>

@required

- (FCAVAsset *)assetWithIdentifier:(NSString *)arg1 remoteURL:(NSURL *)arg2 overrideMIMEType:(NSString *)arg3;

@end
