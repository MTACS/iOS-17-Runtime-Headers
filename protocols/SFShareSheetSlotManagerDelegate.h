
@protocol SFShareSheetSlotManagerDelegate <NSObject>

@required

- (void)connectionInterrupted;
- (void)dataSourceUpdatedWithSessionConfiguration:(UISDShareSheetSessionConfiguration *)arg1;

@optional

- (void)didPerformInServiceActivityWithIdentifier:(NSUUID *)arg1 completed:(bool)arg2 items:(NSArray *)arg3 error:(NSError *)arg4;
- (void)didUpdateAirDropTransferWithChange:(SFAirDropTransferChange *)arg1;
- (void)performActivityInHostWithUUID:(NSUUID *)arg1;
- (void)performAirDropActivityInHostWithNoContentView:(bool)arg1;
- (void)performExtensionActivityInHostWithBundleID:(NSString *)arg1 request:(UISUIActivityExtensionItemDataRequest *)arg2;
- (void)performShortcutActivityInHostWithBundleID:(NSString *)arg1 singleUseToken:(NSString *)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(NSArray *)arg1 suggestionProxies:(NSArray *)arg2 orderedUUIDs:(NSArray *)arg3 activityCategory:(long long)arg4;
- (void)willPerformInServiceActivityWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UISUIActivityExtensionItemDataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, UISDActivityItemData *, void*

@end
