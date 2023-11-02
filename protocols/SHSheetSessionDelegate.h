
@protocol SHSheetSessionDelegate <NSObject>

@required

- (void)collaborationFooterViewModelDidChangeForSession:(SHSheetSession *)arg1;
- (<SFCollaborationService> *)collaborationServiceForSession:(SHSheetSession *)arg1;
- (SFCollaborationCloudSharingResult *)collaborationSharingResultForActivity:(UIActivity *)arg1;
- (void)headerMetadataDidChangeForSession:(SHSheetSession *)arg1;
- (void)isCollaborativeDidChangeForSession:(SHSheetSession *)arg1;
- (void)session:(SHSheetSession *)arg1 didChangeMetadata:(LPLinkMetadata *)arg2;
- (void)sessionConfigurationDidChangeForSession:(SHSheetSession *)arg1;
- (void)showOptionsDidChangeForSession:(SHSheetSession *)arg1;

@end
