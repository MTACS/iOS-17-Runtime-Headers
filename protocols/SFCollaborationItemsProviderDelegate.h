
@protocol SFCollaborationItemsProviderDelegate <NSObject>

@required

- (NSArray *)collaborationItemsProvider:(SFCollaborationItemsProvider *)arg1 resolveActivityItem:(id)arg2;
- (<SFCollaborationService> *)collaborationServiceForItemsProvider:(SFCollaborationItemsProvider *)arg1;

@end
