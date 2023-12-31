
@protocol PUSwipeSelectionManagerDataSource <NSObject>

@required

- (long long)swipeSelectionManager:(PUSwipeSelectionManager *)arg1 numberOfItemsInSection:(long long)arg2;
- (PHAssetCollection *)swipeSelectionManager:(PUSwipeSelectionManager *)arg1 photoCollectionAtIndex:(unsigned long long)arg2;

@end
