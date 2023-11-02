
@protocol SHSheetActivityPerformerDelegate <NSObject>

@required

- (<SFCollaborationService> *)collaborationServiceForActivityPerformer:(SHSheetActivityPerformer *)arg1;
- (LPLinkMetadata *)linkMetadataForActivityPerformer:(SHSheetActivityPerformer *)arg1;

@end
