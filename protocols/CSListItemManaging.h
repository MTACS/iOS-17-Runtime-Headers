
@protocol CSListItemManaging <NCNotificationListSupplementaryViewsContainingDelegate>

@required

- (void)addItem:(CSListItem *)arg1;
- (void)cancelTouchesForItem:(CSListItem *)arg1;
- (void)didAddNewSceneHostEnvironment;
- (void)handleRemovedItemsWithContentHosts:(NSSet *)arg1;
- (void)item:(void *)arg1 requestsAuthenticationAndPerformBlock:(void *)arg2; // needs 2 arg types, found 7: CSListItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)item:(void *)arg1 requestsModalPresentationOfViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CSListItem *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)listHasNotificationContent;
- (CSListItem *)nowPlayingItem;
- (void)removeItem:(CSListItem *)arg1;
- (void)restrictsTouches:(bool)arg1 onHostedSceneOfContentHost:(UIViewController *)arg2;
- (void)restrictsTouchesOnAllHostedScenes:(bool)arg1;
- (void)setNowPlayingItem:(CSListItem *)arg1;
- (void)significantUserInteractionBeganForItem:(CSListItem *)arg1;
- (void)significantUserInteractionEndedForItem:(CSListItem *)arg1;
- (void)updateItem:(CSListItem *)arg1;

@end
