
@interface NSUndoManager : NSObject {
    NSObject<OS_dispatch_source> * _automaticTerminationSource;
    unsigned long long  _flags;
    id  _proxy;
    _NSUndoStack * _redoStack;
    NSArray * _runLoopModes;
    id  _target;
    _NSUndoStack * _undoStack;
}

@property (readonly) bool canRedo;
@property (readonly) bool canUndo;
@property (readonly) long long groupingLevel;
@property bool groupsByEvent;
@property (nonatomic, readonly) bool ic_isUndoingOrRedoing;
@property unsigned long long levelsOfUndo;
@property (readonly) bool redoActionIsDiscardable;
@property (readonly, copy) NSString *redoActionName;
@property (readonly, copy) NSString *redoMenuItemTitle;
@property (getter=isRedoing, readonly) bool redoing;
@property (copy) NSArray *runLoopModes;
@property (readonly) bool undoActionIsDiscardable;
@property (readonly, copy) NSString *undoActionName;
@property (readonly, copy) NSString *undoMenuItemTitle;
@property (getter=isUndoRegistrationEnabled, readonly) bool undoRegistrationEnabled;
@property (getter=isUndoing, readonly) bool undoing;
@property (nonatomic, readonly) bool vk_isUndoingOrRedoing;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_endTopLevelGroupings;
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(bool)arg1;
+ (void)initialize;

- (void)__redoCommonDoSingle:(bool)arg1;
- (void)__redoSingle;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_commitUndoGrouping;
- (void)_delayAutomaticTermination:(double)arg1;
- (bool)_endUndoGroupRemovingIfEmpty:(bool)arg1;
- (void)_forwardTargetInvocation:(id)arg1;
- (id)_methodSignatureForTargetSelector:(SEL)arg1;
- (void)_postCheckpointNotification;
- (void)_prepareEventGrouping;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_registerUndoObject:(id)arg1;
- (void)_registerUndoWithTarget:(id)arg1 handler:(id /* block */)arg2;
- (void)_rollbackUndoGrouping;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)_setGroupIdentifier:(id)arg1;
- (bool)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2;
- (id)_undoStack;
- (void)beginUndoGrouping;
- (bool)canRedo;
- (bool)canUndo;
- (void)dealloc;
- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (void)endUndoGrouping;
- (long long)groupingLevel;
- (bool)groupsByEvent;
- (id)init;
- (bool)isRedoing;
- (bool)isUndoRegistrationEnabled;
- (bool)isUndoing;
- (unsigned long long)levelsOfUndo;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)redo;
- (bool)redoActionIsDiscardable;
- (id)redoActionName;
- (id)redoMenuItemTitle;
- (id)redoMenuTitleForUndoActionName:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 handler:(id /* block */)arg2;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)arg1;
- (id)runLoopModes;
- (void)setActionIsDiscardable:(bool)arg1;
- (void)setActionName:(id)arg1;
- (void)setGroupsByEvent:(bool)arg1;
- (void)setLevelsOfUndo:(unsigned long long)arg1;
- (void)setRunLoopModes:(id)arg1;
- (void)undo;
- (bool)undoActionIsDiscardable;
- (id)undoActionName;
- (id)undoMenuItemTitle;
- (id)undoMenuTitleForUndoActionName:(id)arg1;
- (void)undoNestedGroup;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)registerUndoForCloudSyncingObjectActivityEvent:(id)arg1 cloudSyncingObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)shared;

- (bool)ic_isUndoingOrRedoing;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)ttr_saveRequestIn:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (bool)vk_isUndoingOrRedoing;
- (void)vk_performUndoGroup:(id /* block */)arg1;
- (void)vk_performUndoGroupWithActionName:(id)arg1 undoGroup:(id /* block */)arg2;

@end
