
@protocol PKDiscoveryServiceExportedInterface

@required

- (void)completedCTAForItem:(PKDiscoveryItem *)arg1;
- (void)dialogRequestsChangedForPlacement:(NSString *)arg1;
- (void)discoveryArticleLayoutsUpdated:(NSArray *)arg1;
- (void)discoveryEngagementMessagesUpdated;

@end
