
@interface TabGroupSwitcherViewController : NSObject <SFCapsuleCollectionViewDataSource, SFCapsuleCollectionViewDelegate, SFCapsuleCollectionViewGestureObserving, SFTabViewContainerViewDataSource, TabOverviewPresentationObserving, UIContextMenuInteractionDelegate> {
    long long  _activeAnimationCount;
    <TabGroupSwitcherViewControllerDelegate> * _delegate;
    long long  _discreteTabGroupSwitchAnimationCount;
    bool  _hasActiveUserInteraction;
    bool  _ignoreReloadData;
    TabController * _tabController;
    NSMutableDictionary * _tabGroupIDToTabViewAdaptorMap;
    UIButton * _tabGroupPickerButton;
    NSArray * _tabGroups;
    TabOverviewToolbar * _toolbar;
    TabGroupSwitcherView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TabGroupSwitcherViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TabController *tabController;
@property (nonatomic, readonly) UIView<TabContainerView> *view;

- (void).cxx_destruct;
- (void)activeTabGroupDidChange;
- (id)capsuleCollectionView:(id)arg1 contentViewForItemAtIndex:(long long)arg2;
- (void)capsuleCollectionView:(id)arg1 didBeginSelectionGestureOnAxis:(unsigned long long)arg2;
- (void)capsuleCollectionView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)capsuleCollectionView:(id)arg1 didUpdateProgress:(double)arg2 toSelectItemAtIndex:(long long)arg3 progressToTopAction:(double)arg4 snapToAxis:(unsigned long long)arg5;
- (void)capsuleCollectionView:(id)arg1 willEndSelectionGestureWithCoordinator:(id)arg2;
- (void)capsuleCollectionView:(id)arg1 willSelectItemAtIndex:(long long)arg2 coordinator:(id)arg3;
- (bool)capsuleCollectionViewShouldFocusSelectedItem:(id)arg1;
- (void)closeAllTabs:(id)arg1;
- (id)containerView:(id)arg1 childViewAtIndex:(long long)arg2;
- (void)containerView:(id)arg1 dismantleChildView:(id)arg2;
- (bool)containerView:(id)arg1 shouldDismantleChildView:(id)arg2 atIndex:(long long)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)createTab:(id)arg1;
- (id)createToolbarForCapsuleCollectionView:(id)arg1;
- (id)delegate;
- (void)dismissTabSwitcher:(id)arg1;
- (id)initWithTabController:(id)arg1;
- (long long)numberOfChildrenForContainerView:(id)arg1;
- (unsigned long long)numberOfItemsInCapsuleCollectionView:(id)arg1;
- (void)presentTabGroups:(id)arg1;
- (void)reloadTabGroup:(id)arg1;
- (void)reloadTabGroups;
- (void)setDelegate:(id)arg1;
- (void)tabCollectionViewWillPresent:(id)arg1;
- (id)tabController;
- (void)tabOverview:(id)arg1 didUpdateScalePercentageForActiveItem:(double)arg2;
- (id)view;

@end
