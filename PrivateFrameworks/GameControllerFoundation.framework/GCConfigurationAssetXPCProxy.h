
@interface GCConfigurationAssetXPCProxy : NSObject <GCConfigurationAsset, NSSecureCoding> {
    NSString * _assetId;
    NSString * _assetState;
    GCVersion * _compatibilityVersion;
    long long  _contentRevision;
    GCVersion * _contentVersion;
}

@property (readonly) NSString *assetId;
@property (readonly) NSString *assetState;
@property (readonly) GCVersion *compatibilityVersion;
@property (readonly) long long contentRevision;
@property (readonly) GCVersion *contentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetId;
- (id)assetState;
- (id)compatibilityVersion;
- (long long)contentRevision;
- (id)contentVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
