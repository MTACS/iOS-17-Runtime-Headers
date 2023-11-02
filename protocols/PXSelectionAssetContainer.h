
@protocol PXSelectionAssetContainer <NSObject>

@required

- (bool)px_isEmpty;

@optional

- (PHFetchResult *)px_fetchContainedAssets;

@end
