
@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (nonatomic, readonly) NSString *recordName;

+ (bool)supportsSecureCoding;

- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 tryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (unsigned long long)itemType;
- (id)recordName;

@end
