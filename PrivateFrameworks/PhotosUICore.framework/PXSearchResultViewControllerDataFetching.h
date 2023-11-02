
@interface PXSearchResultViewControllerDataFetching : NSObject

+ (id)_fetchAssetCollectionsForCollectionSearchResult:(id)arg1;
+ (id)assetCollectionForAlbumSearchResult:(id)arg1;
+ (id)assetCollectionForAssetAggregationSearchResult:(id)arg1;
+ (id)assetCollectionForAssetUUIDs:(id)arg1 title:(id)arg2;
+ (id)personForPersonSearchResult:(id)arg1;
+ (id)photosDetailsContextForCollectionSearchResult:(id)arg1;
+ (id)photosViewConfigurationForAlbumSearchResult:(id)arg1;
+ (id)photosViewConfigurationForAssetAggregationSearchResult:(id)arg1 photoLibrary:(id)arg2;
+ (id)photosViewConfigurationForCollectionSearchResult:(id)arg1;
+ (id)storyConfigurationForCollectionSearchResult:(id)arg1;

@end
