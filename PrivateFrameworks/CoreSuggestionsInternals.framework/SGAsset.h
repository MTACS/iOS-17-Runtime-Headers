
@interface SGAsset : NSObject

+ (id)asset;
+ (void)downloadMetadataWithCompletion:(id /* block */)arg1;
+ (id)localeAsset;
+ (id)localeAssetIdentifier;
+ (id)notificationQueue;
+ (id)regionAsset;
+ (id)regionAssetIdentifier;

@end
