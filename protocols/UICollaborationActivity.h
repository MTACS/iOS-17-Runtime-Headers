
@protocol UICollaborationActivity <NSObject>

@required

- (<SFCollaborationItem> *)collaborationItem;
- (void)setCollaborationItem:(id <SFCollaborationItem>)arg1;

@optional

- (bool)canPerformWithCollaborationItem:(id <SFCollaborationItem>)arg1 activityItems:(NSArray *)arg2;
- (<SFCollaborationService> *)collaborationService;
- (bool)isCollaborative;
- (void)setCollaborationService:(id <SFCollaborationService>)arg1;
- (void)setIsCollaborative:(bool)arg1;

@end
