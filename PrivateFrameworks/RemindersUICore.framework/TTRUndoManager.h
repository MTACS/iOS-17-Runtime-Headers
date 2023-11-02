
@interface TTRUndoManager : NSUndoManager {
    NSString * _debugIdentifier;
    bool  _disableRemoveAllActions;
    NSString * _pendingActionName;
}

@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, readonly) NSString *debug_redoStackDescription;
@property (nonatomic, readonly) NSString *debug_undoStackDescription;
@property (nonatomic) bool disableRemoveAllActions;
@property (nonatomic, retain) NSString *pendingActionName;

+ (void)withActionName:(id)arg1 undoManager:(id)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_consumePendingActionName;
- (void)_registerLogUserAction:(id)arg1;
- (id)debugIdentifier;
- (id)debug_redoStackDescription;
- (id)debug_undoStackDescription;
- (id)description;
- (bool)disableRemoveAllActions;
- (id)initWithDebugIdentifier:(id)arg1;
- (id)pendingActionName;
- (void)registerUndoWithTarget:(id)arg1 handler:(id /* block */)arg2;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)removeAllActions;
- (void)setDebugIdentifier:(id)arg1;
- (void)setDisableRemoveAllActions:(bool)arg1;
- (void)setPendingActionName:(id)arg1;

@end
