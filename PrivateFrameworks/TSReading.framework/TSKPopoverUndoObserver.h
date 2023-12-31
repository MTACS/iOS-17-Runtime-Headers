
@interface TSKPopoverUndoObserver : NSObject {
    NSMutableSet * mPopoverBasedViewControllers;
    NSMutableSet * mPopoverControllers;
    NSUndoManager * mUndoManager;
}

@property (nonatomic, retain) NSUndoManager *observedUndoManager;

+ (id)sharedObserver;

- (void)addPopoverBasedViewController:(id)arg1;
- (void)addPopoverController:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)observedUndoManager;
- (void)removePopoverBasedViewController:(id)arg1;
- (void)removePopoverController:(id)arg1;
- (void)setObservedUndoManager:(id)arg1;
- (void)undoManagerWillRedo:(id)arg1;
- (void)undoManagerWillUndo:(id)arg1;

@end
