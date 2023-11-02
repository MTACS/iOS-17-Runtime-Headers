
@protocol HUControllableCollectionViewLayout <NSObject>

@optional

- (void)applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg1 toItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)clearAllOverrideAttributesForItems:(NSSet *)arg1;
- (void)clearOverrideAttributesForItem:(HFItem *)arg1 atIndexPath:(NSIndexPath *)arg2;

@end
