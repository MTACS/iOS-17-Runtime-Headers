
@protocol PXSearchTopAssetsResultChangeDelegate <NSObject>

@required

- (void)didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg1;
- (void)didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg1 atIndexes:(NSIndexSet *)arg2;

@end
