
@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand <MPCPlayerReorderItemsCommand>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canMoveItem:(id)arg1;
- (id)limitedDisplayIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
- (id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
- (id)moveItem:(id)arg1 afterItem:(id)arg2;
- (id)moveItem:(id)arg1 beforeItem:(id)arg2;

@end
