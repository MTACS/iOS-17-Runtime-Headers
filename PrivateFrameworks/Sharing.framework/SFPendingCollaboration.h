
@interface SFPendingCollaboration : NSObject {
    SFCollaborationMetadata * _collaborationMetadata;
}

@property (nonatomic, readonly, copy) SFCollaborationMetadata *collaborationMetadata;

- (void).cxx_destruct;
- (id)collaborationMetadata;

@end
