
@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator {
    bool  _initializedReorderSound;
    NSDate * _lastDragStartDate;
    unsigned int  _reorderSound;
}

@property (nonatomic) bool initializedReorderSound;
@property (nonatomic, retain) NSDate *lastDragStartDate;
@property (nonatomic) unsigned int reorderSound;

- (void).cxx_destruct;
- (void)dealloc;
- (void)draggingActionsEnteredDeletionZone:(id)arg1;
- (void)draggingInsertedActions:(id)arg1 intoWorkflow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)draggingItemSnapped;
- (void)draggingMovedActions:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 inWorkflow:(id)arg4;
- (void)draggingRemovedActions:(id)arg1;
- (void)draggingStarted;
- (bool)initializedReorderSound;
- (id)lastDragStartDate;
- (void)playReorderSound;
- (unsigned int)reorderSound;
- (void)setInitializedReorderSound:(bool)arg1;
- (void)setLastDragStartDate:(id)arg1;
- (void)setReorderSound:(unsigned int)arg1;

@end
