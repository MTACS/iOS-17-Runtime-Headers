
@interface PXDragHapticFeedbackGenerator : NSObject {
    bool  _reorderFeedbackEnabled;
    _UIDragSnappingFeedbackGenerator * _reorderFeedbackGenerator;
}

@property (nonatomic) bool reorderFeedbackEnabled;
@property (nonatomic, readonly) _UIDragSnappingFeedbackGenerator *reorderFeedbackGenerator;

- (void).cxx_destruct;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (void)performFeedback;
- (bool)reorderFeedbackEnabled;
- (id)reorderFeedbackGenerator;
- (void)setReorderFeedbackEnabled:(bool)arg1;

@end
