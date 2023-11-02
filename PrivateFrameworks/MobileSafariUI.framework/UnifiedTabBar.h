
@interface UnifiedTabBar : SFUnifiedTabBar <TabCollectionView, TabCollectionViewDragDropSupport> {
    <TabCollectionViewDelegate> * _delegate;
    <_SFNavigationIntentHandling> * _navigationIntentHandler;
}

@property (nonatomic, readonly) bool canDragOntoActiveTab;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TabCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidesInactiveTabs;
@property (nonatomic, readonly) long long itemDragContentType;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) bool lastDecelerationWasInterrupted;
@property (nonatomic, readonly) unsigned long long layoutAxes;
@property <_SFNavigationIntentHandling> *navigationIntentHandler;
@property (nonatomic, readonly) ReorderingAutoscroller *reorderingAutoscroller;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDropTransitionToItemView;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)activateItem:(id)arg1;
- (bool)canCloseItem:(id)arg1;
- (bool)canDragOntoActiveTab;
- (void)cleanUpDragPreviewForItem:(id)arg1;
- (void)closeItem:(id)arg1;
- (unsigned long long)contextMenuOptionsForItem:(id)arg1;
- (id)delegate;
- (void)didEndShowingContextMenuForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)dragPreviewForItem:(id)arg1 pinned:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(id)arg1;
- (bool)hidesInactiveTabs;
- (id)itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)itemDragContentType;
- (id)items;
- (unsigned long long)layoutAxes;
- (id)navigationIntentHandler;
- (id)newSearchField;
- (void)performDropWithNavigationIntent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationIntentHandler:(id)arg1;
- (bool)shouldPinItemsDroppedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldSpringLoadItem:(id)arg1;
- (bool)supportsDropTransitionToItemView;
- (id)targetItemForDropAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)targetedDragPreviewForDroppingItem:(id)arg1;
- (id)targetedDragPreviewForLiftingItem:(id)arg1;
- (id)targetedPreviewForDismissingMenuForItem:(id)arg1;
- (id)view;
- (id)viewForItem:(id)arg1;
- (void)willBeginShowingContextMenuForItem:(id)arg1;

@end
