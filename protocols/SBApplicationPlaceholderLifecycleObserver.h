
@protocol SBApplicationPlaceholderLifecycleObserver

@required

- (void)applicationPlaceholdersAdded:(NSArray *)arg1;
- (void)applicationPlaceholdersCancelled:(NSArray *)arg1;
- (void)applicationPlaceholdersInstalled:(NSArray *)arg1;
- (void)applicationPlaceholdersNetworkUsageChanged:(bool)arg1;

@end
