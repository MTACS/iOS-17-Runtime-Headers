
@protocol PUScrubberTilingLayoutDelegate <NSObject>

@optional

- (float)layout:(PUScrubberTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)layout:(PUScrubberTilingLayout *)arg1 isItemAtAtIndexPathSelected:(NSIndexPath *)arg2;
- (bool)layout:(PUScrubberTilingLayout *)arg1 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(NSIndexPath *)arg2;

@end
