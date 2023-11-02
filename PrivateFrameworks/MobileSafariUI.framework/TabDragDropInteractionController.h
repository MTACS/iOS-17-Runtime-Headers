
@interface TabDragDropInteractionController : NSObject <UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate, UIDropInteractionDelegate_Private> {
    <TabDocumentDragDropDataSource> * _dataSource;
    unsigned long long  _dropAnimationCount;
    TabDocumentDropHandler * _dropHandler;
    NSMapTable * _hasHiddenDocumentsForDragSessions;
    NSMapTable * _insertedTabsForDragItems;
    <UIDragSession> * _pendingDragSession;
    NSMapTable * _placeholderDocumentsForSessions;
    NSMutableSet * _tabViewsPendingActivation;
}

@property (nonatomic, readonly) <TabDocumentDragDropDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TabDocumentDropHandler *dropHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canDelegateDragDropForTabCollectionView:(id)arg1;

- (void).cxx_destruct;
- (id)_autoscrollerForInteraction:(id)arg1;
- (bool)_canOpenInCurrentTabForSession:(id)arg1 tabView:(id)arg2;
- (void)_cleanUpDragPreviewForSesssion:(id)arg1;
- (void)_cleanUpDropPlaceholderForSession:(id)arg1 interaction:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_insertPlaceholderTabIfNeededForSession:(id)arg1 interaction:(id)arg2;
- (id)_newDragItemsAtPoint:(struct CGPoint { double x1; double x2; })arg1 excludingTabDocuments:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (bool)_shouldMovePlaceholderItem:(id)arg1 overTargetItem:(id)arg2 withDropLocation:(struct CGPoint { double x1; double x2; })arg3 interaction:(id)arg4;
- (id)_tabCollectionItemAtPoint:(struct CGPoint { double x1; double x2; })arg1 interaction:(id)arg2;
- (bool)_tabViewIsFilteringTabs:(id)arg1;
- (void)_transitionToDragState:(long long)arg1 fromDragState:(long long)arg2 forTabCollectionItemsInSession:(id)arg3 interaction:(id)arg4;
- (void)_unhideTabDocumentsForLocalDragSession:(id)arg1;
- (void)_updatePreviewsForSession:(id)arg1 pinned:(bool)arg2;
- (id)_viewForTransitionToItem:(id)arg1 withTabCollectionView:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)dataSource;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dropHandler;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithDataSource:(id)arg1 dropHandler:(id)arg2;

@end
