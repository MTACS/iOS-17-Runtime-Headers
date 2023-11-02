
@interface DOCUndoManager : NSUndoManager {
    bool  _shouldRemoveAllActions;
}

@property (nonatomic) bool shouldRemoveAllActions;

+ (id)shared;

- (void)dealloc;
- (void)didPerformUndoableOperation;
- (id)init;
- (bool)isActionOperation:(id)arg1;
- (bool)processSupportsUndoingActions;
- (void)registerUndoOperationForSender:(id)arg1;
- (void)setShouldRemoveAllActions:(bool)arg1;
- (bool)shouldRemoveAllActions;
- (void)startUndoNotificationsObservation;
- (void)stopUndoNotificationsObservation;

@end
