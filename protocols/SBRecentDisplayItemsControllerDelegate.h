
@protocol SBRecentDisplayItemsControllerDelegate <NSObject>

@optional

- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2 andDropItem:(SBDisplayItem *)arg3;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didMoveItemToFront:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didRemoveItem:(SBDisplayItem *)arg2;
- (bool)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 shouldAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(SBRecentDisplayItemsController *)arg1;
- (bool)recentDisplayItemsControllerShouldRepresentAppClipsAsWebClips:(SBRecentDisplayItemsController *)arg1;

@end
