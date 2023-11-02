
@protocol HUCollectionLayoutManagerDelegate

@required

- (NSArray *)displayedItemsInSection:(NSString *)arg1;
- (bool)shouldShowHeaderForSection:(NSString *)arg1;

@optional

- (bool)allowsCondensedAccessoryTiles;
- (bool)shouldShowFooterForSection:(NSString *)arg1;
- (HUGridLayoutOptions *)transformWithLayoutOptions:(HUGridLayoutOptions *)arg1;

@end
