
@interface HFSelectableRoomTransformItem : HFTransformItem

@property (nonatomic, readonly) HFRoomItem *roomItem;

- (id)initWithRoomItem:(id)arg1 accessoryVendor:(id)arg2;
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(id /* block */)arg2 resultsTransformBlock:(id /* block */)arg3;
- (id)roomItem;

@end
