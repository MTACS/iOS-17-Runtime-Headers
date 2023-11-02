
@protocol PKDiscoveryObserver <NSObject>

@optional

- (void)discoveryService:(PKDiscoveryService *)arg1 completedCTAForItem:(PKDiscoveryItem *)arg2;
- (void)discoveryService:(PKDiscoveryService *)arg1 dialogRequestsChangedForPlacement:(NSString *)arg2;
- (void)discoveryService:(PKDiscoveryService *)arg1 receivedUpdatedDiscoveryArticleLayouts:(NSArray *)arg2;
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(PKDiscoveryService *)arg1;

@end
