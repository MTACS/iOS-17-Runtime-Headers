
@protocol PLCloudAssetPayloadRestorePayload

@required

- (NSString *)assetIdentifier;
- (long long)assetIdentifierType;
- (bool)insertWithAsset:(PLManagedAsset *)arg1 inManagedObjectContext:(NSManagedObjectContext *)arg2;
- (void)setAssetIdentifier:(NSString *)arg1;

@end
