
@interface SSScreenshotAssetManagerRegistrationOptions : NSObject {
    NSString * _applicationBundleID;
    SSUIServiceOptionsAssetMetadata * _assetMetadata;
    NSArray * _harvestedMetadata;
    unsigned long long  _saveLocation;
}

@property (nonatomic, copy) NSString *applicationBundleID;
@property (nonatomic, readonly) NSString *assetDescription;
@property (nonatomic, copy) SSUIServiceOptionsAssetMetadata *assetMetadata;
@property (nonatomic, copy) NSArray *harvestedMetadata;
@property (nonatomic) unsigned long long saveLocation;

- (void).cxx_destruct;
- (id)applicationBundleID;
- (id)assetDescription;
- (id)assetMetadata;
- (id)harvestedMetadata;
- (unsigned long long)saveLocation;
- (void)setApplicationBundleID:(id)arg1;
- (void)setAssetMetadata:(id)arg1;
- (void)setHarvestedMetadata:(id)arg1;
- (void)setSaveLocation:(unsigned long long)arg1;

@end
