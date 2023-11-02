
@protocol SUUIItemCollectionDelegate <NSObject>

@required

- (SUUIItemCellLayout *)itemCollectionController:(SUUIItemCollectionController *)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemCollectionController:(SUUIItemCollectionController *)arg1 itemPageRangeForOffset:(struct CGPoint { double x1; double x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemRangeForItemCollectionController:(SUUIItemCollectionController *)arg1;

@optional

- (void)itemCollectionController:(SUUIItemCollectionController *)arg1 applyScreenshotImage:(UIImage *)arg2 toCellLayout:(SUUIItemCellLayout *)arg3;
- (SUUIScreenshot *)itemCollectionController:(SUUIItemCollectionController *)arg1 screenshotForItem:(SUUIItem *)arg2;
- (bool)shouldCacheAheadWhenIdleForItemCollectionController:(SUUIItemCollectionController *)arg1;

@end
