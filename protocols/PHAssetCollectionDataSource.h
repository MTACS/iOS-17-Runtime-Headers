
@protocol PHAssetCollectionDataSource <NSObject>

@required

- (PHFetchResult *)assetCollectionsFetchResult;
- (PHFetchResult *)assetsInAssetCollection:(PHAssetCollection *)arg1;

@end
