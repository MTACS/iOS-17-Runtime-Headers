
@protocol PUReorderableLayout

@required

- (void)beginInsertingItemAtIndexPath:(NSIndexPath *)arg1;
- (void)beginReorderingItemAtIndexPath:(NSIndexPath *)arg1;
- (void)endInsertingItem;
- (void)endReordering;
- (NSIndexPath *)reorderedIndexPath:(NSIndexPath *)arg1;
- (void)updateReorderingTargetIndexPath:(NSIndexPath *)arg1;

@end
