
@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _assetMetadata;
    NSArray * _assets;
    NSArray * _packageMetadata;
    NSArray * _packages;
    NSArray * _unavailableAssets;
    NSArray * _unavailablePackages;
    CKUploadRequestConfiguration * _uploadRequestConfiguration;
}

@property (nonatomic, retain) NSArray *assetMetadata;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, retain) NSArray *packageMetadata;
@property (nonatomic, retain) NSArray *packages;
@property (nonatomic, retain) NSArray *unavailableAssets;
@property (nonatomic, retain) NSArray *unavailablePackages;
@property (nonatomic, retain) CKUploadRequestConfiguration *uploadRequestConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetMetadata;
- (id)assets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)packageMetadata;
- (id)packages;
- (void)setAssetMetadata:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setPackageMetadata:(id)arg1;
- (void)setPackages:(id)arg1;
- (void)setUnavailableAssets:(id)arg1;
- (void)setUnavailablePackages:(id)arg1;
- (void)setUploadRequestConfiguration:(id)arg1;
- (id)unavailableAssets;
- (id)unavailablePackages;
- (id)uploadRequestConfiguration;

@end
