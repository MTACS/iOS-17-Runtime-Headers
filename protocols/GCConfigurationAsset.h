
@protocol GCConfigurationAsset <NSObject>

@required

- (NSString *)assetId;
- (NSString *)assetState;
- (GCVersion *)compatibilityVersion;
- (long long)contentRevision;
- (GCVersion *)contentVersion;

@end
