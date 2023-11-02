
@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction, UIInteraction_Internal, _UIDragSetDownAnimationTarget, _UIVisualStyleStylable> {
    NSMutableSet * _activeDragGestureRecognizers;
    bool  _allowsSimultaneousDropSessions;
    UIDropInteractionContextImpl * _context;
    <UIDropInteractionDelegate> * _delegate;
    NSMapTable * _enteredDropSessionByDraggingSession;
    <UIDropInteractionEffect> * _interactionEffect;
    <_UIDropInteractionOwning> * _owner;
    UIPasteConfiguration * _pasteConfiguration;
    unsigned long long  _potentialDragOperation;
    bool  _wantsDefaultVisualBehavior;
}

@property (nonatomic) bool allowsSimultaneousDropSessions;
@property (nonatomic, retain) UIDropInteractionContextImpl *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIDropInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIDropInteractionEffect> *interactionEffect;
@property (nonatomic) <_UIDropInteractionOwning> *owner;
@property (getter=_pasteConfiguration, nonatomic, readonly, copy) UIPasteConfiguration *pasteConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:, nonatomic) bool wantsDefaultVisualBehavior;

+ (id)visualStyleRegistryIdentity;

- (void).cxx_destruct;
- (bool)_allowsSimultaneousDragWithEvent:(id)arg1;
- (bool)_canHandleDragEvent:(id)arg1;
- (void)_dragDestinationGestureStateChanged:(id)arg1;
- (void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (id)_initWithPasteConfiguration:(id)arg1;
- (id)_pasteConfiguration;
- (void)_prepareItemsInSessionForDrop:(id)arg1;
- (void)_sendSessionDidEnd:(id)arg1;
- (id)_setDownAnimation:(id)arg1 customSpringAnimationBehaviorForSetDownOfDragItem:(id)arg2;
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3 preview:(id)arg4;
- (unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(bool)arg2 precise:(bool)arg3 prefersFullSizePreview:(bool)arg4 preferredBadgeStyle:(long long)arg5 onSession:(id)arg6;
- (void)_setWantsDefaultVisualBehavior:(bool)arg1;
- (unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(bool*)arg6;
- (bool)_wantsDefaultVisualBehavior;
- (id)_windowForSetDownOfDragItem:(id)arg1;
- (bool)allowsSimultaneousDropSessions;
- (id)context;
- (id)delegate;
- (void)didMoveToOwner:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)interactionEffect;
- (bool)isActive;
- (id)owner;
- (void)setAllowsSimultaneousDropSessions:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setInteractionEffect:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)view;
- (void)willMoveToOwner:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end
