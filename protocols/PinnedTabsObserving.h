
@protocol PinnedTabsObserving <NSObject>

@optional

- (void)pinnedTabsManager:(PinnedTabsManager *)arg1 didUpdatePinnedTabs:(NSArray *)arg2 inProfileWithIdentifier:(NSString *)arg3;
- (void)pinnedTabsManager:(PinnedTabsManager *)arg1 didUpdatePinnedTabs:(NSArray *)arg2 isPrivate:(bool)arg3;

@end
