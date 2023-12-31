
@protocol SKUIItemCollectionDelegate <NSObject>

@required

- (SKUIItemCellLayout *)itemCollectionController:(SKUIItemCollectionController *)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemCollectionController:(SKUIItemCollectionController *)arg1 itemPageRangeForOffset:(struct CGPoint { double x1; double x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemRangeForItemCollectionController:(SKUIItemCollectionController *)arg1;

@optional

- (void)itemCollectionController:(SKUIItemCollectionController *)arg1 applyScreenshotImage:(UIImage *)arg2 toCellLayout:(SKUIItemCellLayout *)arg3;
- (SKUIScreenshot *)itemCollectionController:(SKUIItemCollectionController *)arg1 screenshotForItem:(SKUIItem *)arg2;
- (bool)shouldCacheAheadWhenIdleForItemCollectionController:(SKUIItemCollectionController *)arg1;

@end
