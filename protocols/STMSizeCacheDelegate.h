
@protocol STMSizeCacheDelegate <NSObject>

@optional

- (void)sizeCache:(STMSizeCache *)arg1 itemSizesChanged:(NSArray *)arg2;
- (void)sizeCacheItemsUpdated:(STMSizeCache *)arg1;

@end
