
@protocol _SFCollaborationItemsRequestDelegate <NSObject>

@required

- (NSArray *)collaborationItemsRequest:(_SFCollaborationItemsRequest *)arg1 resolveActivityItem:(id)arg2;
- (<SFCollaborationService> *)collaborationServiceForItemsRequest:(_SFCollaborationItemsRequest *)arg1;

@end
