
@interface SBIconDragContext : NSObject <BSDescriptionProviding> {
    NSObject<OS_os_activity> * _activity;
    struct os_activity_scope_state_s { 
        unsigned long long opaque[2]; 
    }  _activityState;
    NSMutableDictionary * _additionalMatchingDroppedIcons;
    NSMutableSet * _allBouncedIcons;
    NSMapTable * _appDragLocalContexts;
    NSMutableSet * _appLocalContexts;
    NSMapTable * _bouncedIcons;
    bool  _cancelled;
    SBIcon * _candidateRecipientIcon;
    NSSet * _createdIcons;
    SBIconListView * _currentEnteredIconListView;
    NSMutableDictionary * _destinationFolderIconViews;
    NSMutableSet * _destinationIconViews;
    NSMutableDictionary * _destinationStackIconViews;
    bool  _dragItemWasConsumedExternally;
    <SBIconListViewPlaceholderPositioning> * _dragPlaceholder;
    unsigned long long  _dragPlaceholderGridSizeClass;
    SBIconListView * _dragPlaceholderListView;
    NSMapTable * _dragPreviewForIconViews;
    <SBHIconLayoutHidingUpdating> * _draggedIconsHiddenAssertion;
    NSMutableSet * _dropAnimatingDragItems;
    NSSet * _droppedIcons;
    bool  _duplicatesSourceIcons;
    NSMutableSet * _enteredIconListViews;
    NSArray * _grabbedIconViews;
    NSMutableSet * _grabbedIcons;
    SBPlaceholderIcon * _iconPlaceholder;
    NSMapTable * _iconToExpandAfterDropAnimation;
    NSMapTable * _iconViewDroppingAssertions;
    NSMapTable * _iconViewPrepareForDropAssertions;
    NSMutableDictionary * _initialIconGridPaths;
    NSMutableDictionary * _initialIconPaths;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchOffsetFromIconImageCenter;
    NSSet * _itemIdentifiers;
    NSDate * _lastUserInteractionDate;
    NSCountedSet * _messageExpectations;
    bool  _notifiedDelegateForDropSession;
    bool  _performedIconDrop;
    SBIconView * _primaryIconView;
    unsigned long long  _recipientIconEntryRegion;
    SBIconView * _recipientIconView;
    NSSet * _removedMatchingLeafIcons;
    bool  _snapToGridAllowed;
    NSMutableSet * _sourceIconViews;
    NSSet * _sourceIcons;
    long long  _state;
    NSMapTable * _targetsForCancellingIconViews;
    NSTimer * _watchdogTimer;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly, copy) NSArray *allIconsEverBounced;
@property (nonatomic, readonly, copy) NSSet *appLocalContexts;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) SBIcon *candidateRecipientIcon;
@property (nonatomic, copy) NSSet *createdIcons;
@property (nonatomic) SBIconListView *currentEnteredIconListView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dragItemWasConsumedExternally;
@property (nonatomic, retain) <SBIconListViewPlaceholderPositioning> *dragPlaceholder;
@property (nonatomic) unsigned long long dragPlaceholderGridSizeClass;
@property (nonatomic, retain) SBIconListView *dragPlaceholderListView;
@property (nonatomic, readonly) unsigned long long draggedIconGridSizeClass;
@property (nonatomic, readonly, copy) NSSet *draggedIcons;
@property (nonatomic, retain) <SBHIconLayoutHidingUpdating> *draggedIconsHiddenAssertion;
@property (nonatomic, copy) NSSet *droppedIcons;
@property (nonatomic) bool duplicatesSourceIcons;
@property (nonatomic, readonly, copy) NSSet *expectedMessages;
@property (nonatomic, copy) NSArray *grabbedIconViews;
@property (nonatomic, readonly) bool hasFolderDraggedIcons;
@property (nonatomic, readonly) bool hasFolderSourceIcons;
@property (nonatomic, readonly) bool hasNonDefaultSizedDraggedIcons;
@property (nonatomic, readonly) bool hasNonDefaultSizedSourceIcons;
@property (nonatomic, readonly) bool hasUserDragged;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBPlaceholderIcon *iconPlaceholder;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialTouchOffsetFromIconImageCenter;
@property (nonatomic, copy) NSSet *itemIdentifiers;
@property (nonatomic, copy) NSDate *lastUserInteractionDate;
@property (nonatomic) bool notifiedDelegateForDropSession;
@property (nonatomic) bool performedIconDrop;
@property (nonatomic, retain) SBIconView *primaryIconView;
@property (nonatomic) unsigned long long recipientIconEntryRegion;
@property (nonatomic, retain) SBIconView *recipientIconView;
@property (nonatomic, copy) NSSet *removedMatchingLeafIcons;
@property (getter=isSnapToGridAllowed, nonatomic) bool snapToGridAllowed;
@property (nonatomic, readonly) unsigned long long sourceIconGridSizeClass;
@property (nonatomic, copy) NSSet *sourceIcons;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (getter=isUserActive, nonatomic, readonly) bool userActive;
@property (getter=isWaitingForMessage, nonatomic, readonly) bool waitingForMessage;
@property (nonatomic, retain) NSTimer *watchdogTimer;

- (void).cxx_destruct;
- (void)_addPrepareForDropAssertionForIconView:(id)arg1;
- (id)activity;
- (void)addAppLocalContext:(id)arg1;
- (void)addDestinationIconView:(id)arg1;
- (void)addDropAnimatingDragItem:(id)arg1;
- (void)addDroppedIcon:(id)arg1;
- (void)addDroppedIcons:(id)arg1;
- (void)addEnteredIconListView:(id)arg1;
- (void)addGrabbedIconView:(id)arg1;
- (void)addIconViewDroppingAssertion:(id)arg1 forIconView:(id)arg2;
- (void)addItemIdentifier:(id)arg1;
- (void)addMessageExpectationNamed:(id)arg1;
- (void)addSourceIcon:(id)arg1;
- (void)addSourceIconView:(id)arg1;
- (void)addSourceIcons:(id)arg1;
- (id)additionalMatchingIconForDroppedIconIdentifier:(id)arg1;
- (id)allIconsEverBounced;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (id)appDragLocalContextWithIconIdentifier:(id)arg1;
- (id)appLocalContexts;
- (id)bouncedIconsForListModel:(id)arg1;
- (id)candidateRecipientIcon;
- (void)clearAllDropAssertions;
- (void)clearDropAssertionsForIconView:(id)arg1;
- (id)createdIcons;
- (id)currentEnteredIconListView;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)destinationFolderIconViewForIconWithIdentifier:(id)arg1;
- (id)destinationStackIconViewForIconWithIdentifier:(id)arg1;
- (bool)dragItemWasConsumedExternally;
- (id)dragPlaceholder;
- (unsigned long long)dragPlaceholderGridSizeClass;
- (id)dragPlaceholderListView;
- (id)dragPreviewForIconView:(id)arg1;
- (unsigned long long)draggedIconGridSizeClass;
- (id)draggedIcons;
- (id)draggedIconsHiddenAssertion;
- (id)droppedIcons;
- (bool)duplicatesSourceIcons;
- (void)enumerateDestinationIconViewsUsingBlock:(id /* block */)arg1;
- (void)enumerateDragPreviewsUsingBlock:(id /* block */)arg1;
- (void)enumerateDraggedIconUsingBlock:(id /* block */)arg1;
- (void)enumerateEnteredIconListViewsUsingBlock:(id /* block */)arg1;
- (void)enumerateSourceIconViewsUsingBlock:(id /* block */)arg1;
- (id)expectedMessages;
- (id)grabbedIconViews;
- (bool)hasBouncedIcon:(id)arg1;
- (bool)hasDestinationIconView:(id)arg1;
- (bool)hasDragItem:(id)arg1;
- (bool)hasEnteredIconListView:(id)arg1;
- (bool)hasFolderDraggedIcons;
- (bool)hasFolderSourceIcons;
- (bool)hasGrabbedIcon:(id)arg1;
- (bool)hasItemIdentifier:(id)arg1;
- (bool)hasMessageExpectationNamed:(id)arg1;
- (bool)hasNonDefaultSizedDraggedIcons;
- (bool)hasNonDefaultSizedSourceIcons;
- (bool)hasSourceIconView:(id)arg1;
- (bool)hasUserDragged;
- (id)iconPlaceholder;
- (id)iconToExpandAfterDropAnimationForDragItem:(id)arg1;
- (id)init;
- (id)initialGridPathForIcon:(id)arg1;
- (id)initialGridPathForIconWithIdentifier:(id)arg1;
- (id)initialIndexPathForIcon:(id)arg1;
- (id)initialIndexPathForIconWithIdentifier:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialTouchOffsetFromIconImageCenter;
- (bool)isAnimatingDropForDragItem:(id)arg1;
- (bool)isCancelled;
- (bool)isSnapToGridAllowed;
- (bool)isUserActive;
- (bool)isWaitingForMessage;
- (id)itemIdentifiers;
- (id)lastUserInteractionDate;
- (id)listModelEnumeratorForBouncedIcons;
- (bool)notifiedDelegateForDropSession;
- (bool)performedIconDrop;
- (id)primaryIconView;
- (unsigned long long)recipientIconEntryRegion;
- (id)recipientIconView;
- (void)removeAllMessageExpectations;
- (void)removeMessageExpectationNamed:(id)arg1;
- (id)removedMatchingLeafIcons;
- (void)resetLastUserInteractionDate;
- (void)setAdditionalMatchingIcon:(id)arg1 forDroppedIconIdentifier:(id)arg2;
- (void)setAppDragLocalContext:(id)arg1 forDragItem:(id)arg2;
- (void)setBouncedIcons:(id)arg1 forListModel:(id)arg2;
- (void)setCancelled:(bool)arg1;
- (void)setCandidateRecipientIcon:(id)arg1;
- (void)setCreatedIcons:(id)arg1;
- (void)setCurrentEnteredIconListView:(id)arg1;
- (void)setDestinationFolderIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)setDestinationStackIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)setDragItemWasConsumedExternally:(bool)arg1;
- (void)setDragPlaceholder:(id)arg1;
- (void)setDragPlaceholderGridSizeClass:(unsigned long long)arg1;
- (void)setDragPlaceholderListView:(id)arg1;
- (void)setDragPreview:(id)arg1 forIconView:(id)arg2;
- (void)setDraggedIconsHiddenAssertion:(id)arg1;
- (void)setDroppedIcons:(id)arg1;
- (void)setDuplicatesSourceIcons:(bool)arg1;
- (void)setGrabbedIconViews:(id)arg1;
- (void)setIcon:(id)arg1 shouldExpandAfterDropAnimationForDragItems:(id)arg2;
- (void)setIconPlaceholder:(id)arg1;
- (void)setInitialGridPath:(id)arg1 forIcon:(id)arg2;
- (void)setInitialIndexPath:(id)arg1 forIcon:(id)arg2;
- (void)setInitialTouchOffsetFromIconImageCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setLastUserInteractionDate:(id)arg1;
- (void)setNotifiedDelegateForDropSession:(bool)arg1;
- (void)setPerformedIconDrop:(bool)arg1;
- (void)setPrimaryIconView:(id)arg1;
- (void)setRecipientIconEntryRegion:(unsigned long long)arg1;
- (void)setRecipientIconView:(id)arg1;
- (void)setRemovedMatchingLeafIcons:(id)arg1;
- (void)setSnapToGridAllowed:(bool)arg1;
- (void)setSourceIcons:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTargetIconView:(id)arg1 forCancellingIconView:(id)arg2;
- (void)setWatchdogTimer:(id)arg1;
- (unsigned long long)sourceIconGridSizeClass;
- (id)sourceIcons;
- (long long)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)swapSourceIconWithIdentifier:(id)arg1 withIcon:(id)arg2;
- (id)targetIconViewForCancellingIconView:(id)arg1;
- (id)watchdogTimer;

@end
