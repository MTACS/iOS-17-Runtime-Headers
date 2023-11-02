
@interface TabOverviewToolbar : UIView <SFCapsuleCollectionViewToolbarContentProviding> {
    BarButton * _addTabButton;
    UIVisualEffectView * _background;
    bool  _backgroundHidden;
    BarButton * _cancelSearchButton;
    bool  _contentBorrowed;
    UIView * _contentContainer;
    BarButton * _doneButton;
    bool  _needsResizeItems;
    long long  _placement;
    UISearchBar * _searchBar;
    double  _searchBarLeadingMargin;
    double  _searchBarMinimumWidth;
    bool  _shouldReserveSpaceForSidebarButton;
    BarButton * _sidebarButton;
    BarButton * _tabGroupButton;
    long long  _tabGroupButtonDisplayStyle;
    double  _tabGroupButtonPreferredWidth;
    UIView * _toolbarSeparator;
}

@property (getter=isBackgroundHidden, nonatomic) bool backgroundHidden;
@property (nonatomic, readonly) bool contentBorrowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long placement;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic) double searchBarLeadingMargin;
@property (nonatomic) bool shouldReserveSpaceForSidebarButton;
@property (readonly) Class superclass;
@property (nonatomic) long long tabGroupButtonDisplayStyle;

- (void).cxx_destruct;
- (id)_buttonForBarButton:(long long)arg1;
- (bool)_canDisplaySearchBarAndSidebarButton;
- (void)_layoutForBottomPlacement;
- (void)_layoutForTopPlacement;
- (void)_resizeItemsIfNeeded;
- (void)addInteraction:(id)arg1 toBarButton:(long long)arg2;
- (void)addPrimaryAction:(id)arg1 forBarButton:(long long)arg2;
- (bool)barButtonIsEnabled:(long long)arg1;
- (bool)barButtonIsHidden:(long long)arg1;
- (double)capsuleCollectionView:(id)arg1 heightForToolbarContentView:(id)arg2;
- (void)capsuleCollectionView:(id)arg1 relinquishToolbarContentView:(id)arg2;
- (bool)contentBorrowed;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundHidden;
- (void)layoutSubviews;
- (id)menuForBarButton:(long long)arg1;
- (long long)placement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForBarButton:(long long)arg1;
- (void)removeInteraction:(id)arg1 fromBarButton:(long long)arg2;
- (void)removePrimaryAction:(id)arg1 forBarButton:(long long)arg2;
- (id)resolvedTintColorForBarButton:(long long)arg1;
- (id)searchBar;
- (double)searchBarLeadingMargin;
- (void)setBackgroundHidden:(bool)arg1;
- (void)setBarButton:(long long)arg1 enabled:(bool)arg2;
- (void)setBarButton:(long long)arg1 hidden:(bool)arg2;
- (void)setMenu:(id)arg1 forBarButton:(long long)arg2;
- (void)setPlacement:(long long)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchBarLeadingMargin:(double)arg1;
- (void)setShouldReserveSpaceForSidebarButton:(bool)arg1;
- (void)setShowingSearchCancelButton:(bool)arg1 animated:(bool)arg2;
- (void)setTabGroupButtonConfiguration:(id)arg1;
- (void)setTabGroupButtonDisplayStyle:(long long)arg1;
- (void)setTabGroupButtonTitle:(id)arg1;
- (bool)shouldReserveSpaceForSidebarButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotBarContentsAfterScreenUpdates:(bool)arg1;
- (long long)tabGroupButtonDisplayStyle;
- (id)toolbarContentViewForCapsuleCollectionView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
