
@interface CKConversationListCollectionViewDragFeedbackGenerator : _UIDragSnappingFeedbackGenerator

- (void)draggedObjectLanded;
- (void)dropTargetUpdated;
- (void)objectSnapped;
- (void)positionUpdated;

@end
