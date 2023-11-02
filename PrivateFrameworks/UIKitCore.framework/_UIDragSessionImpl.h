
@interface _UIDragSessionImpl : NSObject <UIDragSession, _UIDragDropSessionInternal, _UIDragSetDownAnimationTarget, _UIDraggingSessionDelegate> {
    NSMutableSet * _addedDragItemsPendingUpdate;
    NSMutableSet * _addedDraggingItemsWaitingForHandOffOfDragImage;
    NSHashTable * _allInteractions;
    NSMutableArray * _allItems;
    bool  _didHandOffDragImage;
    NSMapTable * _dragSourceInteractionByItem;
    _UIInternalDraggingSessionSource * _internalDragSession;
    id  _localContext;
    UIDragInteraction * _primaryInteraction;
    bool  _sentSessionDidBegin;
}

@property (getter=_allowsItemsToUpdate, nonatomic, readonly) bool _allowsItemsToUpdate;
@property (nonatomic, readonly) long long _dataOwner;
@property (nonatomic, readonly) unsigned int _sessionIdentifier;
@property (nonatomic, readonly) bool allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_internalDragSession, setter=_setInternalDragSession:, nonatomic, retain) _UIInternalDraggingSessionSource *internalDragSession;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) id localContext;
@property (nonatomic, readonly) UIDragInteraction *primaryInteraction;
@property (getter=isRestrictedToDraggingApplication, nonatomic, readonly) bool restrictedToDraggingApplication;
@property (getter=_sentSessionDidBegin, setter=_setSentSessionDidBegin:, nonatomic) bool sentSessionDidBegin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *trackedInteractions;

+ (id)_localDragSessionForSessionDestination:(id)arg1;
+ (id)activeSessions;

- (void).cxx_destruct;
- (bool)_allowsItemsToUpdate;
- (bool)_canAddItems;
- (void)_cancelDrag;
- (long long)_dataOwner;
- (void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;
- (void)_draggingSessionHandedOffDragImage:(id)arg1;
- (id)_internalDragSession;
- (id)_internalSession;
- (bool)_isActive;
- (void)_itemsNeedUpdate:(id)arg1;
- (bool)_sentSessionDidBegin;
- (unsigned int)_sessionIdentifier;
- (id)_setDownAnimation:(id)arg1 customSpringAnimationBehaviorForSetDownOfDragItem:(id)arg2;
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3 preview:(id)arg4;
- (void)_setInternalDragSession:(id)arg1;
- (void)_setSentSessionDidBegin:(bool)arg1;
- (id)_windowForSetDownOfDragItem:(id)arg1;
- (void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2;
- (bool)allowsMoveOperation;
- (bool)canLoadObjectsOfClass:(Class)arg1;
- (id)dragSourceInteractionForDragItem:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(bool)arg2;
- (void)draggingSession:(id)arg1 willAddItems:(id)arg2;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidMove:(id)arg1;
- (void)draggingSessionDidTransferItems:(id)arg1;
- (bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (bool)draggingSessionPrefersFullSizePreviews:(id)arg1;
- (void)draggingSessionWillBegin:(id)arg1;
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (bool)isRestrictedToDraggingApplication;
- (id)items;
- (id)localContext;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)primaryInteraction;
- (void)setLocalContext:(id)arg1;
- (id)trackedInteractions;

@end
