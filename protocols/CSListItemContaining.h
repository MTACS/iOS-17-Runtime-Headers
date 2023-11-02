
@protocol CSListItemContaining <NSObject>

@required

- (void)itemManager:(CSListItemManager *)arg1 cancelTouchesForInteractionWithItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 insertItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 insertSection:(CSListItemSection *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 removeItem:(CSListItem *)arg2;
- (void)itemManager:(void *)arg1 requestsAuthenticationAndPerformBlock:(void *)arg2; // needs 2 arg types, found 7: CSListItemManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)itemManager:(void *)arg1 requestsModalPresentationOfViewController:(void *)arg2 forItem:(void *)arg3 animated:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CSListItemManager *, UIViewController *, CSListItem *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)itemManager:(CSListItemManager *)arg1 setNowPlayingItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 significantUserInteractionBeganWithItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 significantUserInteractionEndedWithItem:(CSListItem *)arg2;
- (void)itemManager:(CSListItemManager *)arg1 updateItem:(CSListItem *)arg2;
- (void)itemManagerDidAddNewSceneHostEnvironment;
- (struct CGSize { double x1; double x2; })sizeToMimicForItemContentHost;

@end
