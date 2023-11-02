
@protocol MPCPlayerReorderItemsCommand <MPCPlayerCommand>

@required

- (bool)canMoveItem:(MPCPlayerResponseItem *)arg1;
- (NSIndexPath *)limitedDisplayIndexPathForMovingIndexPath:(NSIndexPath *)arg1 toProprosedIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)limitedIndexPathForMovingIndexPath:(NSIndexPath *)arg1 toProprosedIndexPath:(NSIndexPath *)arg2;
- (MPCPlayerCommandRequest *)moveItem:(MPCPlayerResponseItem *)arg1 afterItem:(MPCPlayerResponseItem *)arg2;
- (MPCPlayerCommandRequest *)moveItem:(MPCPlayerResponseItem *)arg1 beforeItem:(MPCPlayerResponseItem *)arg2;

@end
