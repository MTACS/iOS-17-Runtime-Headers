
@protocol TSUCloudKitAssetRecord <TSUCloudKitRecord>

@required

- (NSString *)assetFieldName;
- (long long)assetFieldType;
- (NSString *)assetFilename;

@end
