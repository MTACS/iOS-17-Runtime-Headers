
@protocol SFCollaborationSWYItem <SFCollaborationItem>

@required

- (bool)isURLProviderSupported;
- (SFPendingCollaboration *)pendingCollaboration;

@end
