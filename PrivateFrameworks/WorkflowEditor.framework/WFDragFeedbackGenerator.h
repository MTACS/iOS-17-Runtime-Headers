
@interface WFDragFeedbackGenerator : NSObject {
    long long  _activeDragSessions;
    _UIDragSnappingFeedbackGenerator * _feedbackGenerator;
}

@property (nonatomic) long long activeDragSessions;
@property (nonatomic, retain) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void).cxx_destruct;
- (long long)activeDragSessions;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (void)draggingCancelled;
- (void)draggingItemDropped;
- (void)draggingItemSnapped;
- (void)draggingPositionUpdated;
- (void)draggingStarted;
- (void)dropTargetUpdated;
- (id)feedbackGenerator;
- (id)init;
- (id)initWithCollectionView:(id)arg1;
- (void)objectSnapped;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(id /* block */)arg2;
- (void)positionUpdated;
- (void)setActiveDragSessions:(long long)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
