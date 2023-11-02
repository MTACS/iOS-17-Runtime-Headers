
@protocol SFCollaborationPerformerDelegate <NSObject>

@required

- (void)didCancelCreationForCollaborationPerformer:(SFCollaborationPerformer *)arg1;
- (void)didFinishCreationForCollaborationPerformer:(SFCollaborationPerformer *)arg1;

@optional

- (void)didBeginCreationForCollaborationPerformer:(SFCollaborationPerformer *)arg1;
- (void)didBeginCreationForCollaborationPerformer:(SFCollaborationPerformer *)arg1 requiresAddParticipants:(bool)arg2;
- (void)didFailCreationForCollaborationPerformer:(SFCollaborationPerformer *)arg1 error:(NSError *)arg2;

@end
