
@interface MKHapticEngine : NSObject {
    _UIDragSnappingFeedbackGenerator * _dragSnappingGenerator;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    bool  _isDragging;
    UINotificationFeedbackGenerator * _notificationGenerator;
}

- (void).cxx_destruct;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;
- (id)init;
- (void)playFailure;
- (void)playSuccess;
- (void)prepare;

@end
