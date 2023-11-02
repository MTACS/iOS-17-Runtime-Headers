
@interface FPAccessControlManager : NSObject

- (void)_killBundle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(id /* block */)arg1;
- (void)collectionForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)revokeAccessToAllBundles;
- (void)revokeAccessToAllBundlesCompletionHandler:(id /* block */)arg1;
- (void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(id /* block */)arg2;

@end
