
@interface TabGroupSwitcherView : UIView <TabContainerView> {
    SFCapsuleCollectionView * _capsuleView;
    SFTabViewContainerView * _containerView;
    TabGroupSwitcherViewController * _controller;
    UIVisualEffectView * _statusBarBackdrop;
    TabGroupSwitcherViewController * _tabGroupSwitcher;
    double  _tabViewPresentationProgress;
}

@property (nonatomic, readonly) <SFCapsuleCollectionViewToolbarContentProviding> *alternateToolbarContentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsTabGroupSwitcherToolbar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alternateToolbarContentProvider;
- (void)layoutSubviews;
- (void)setShowsTabGroupSwitcherToolbar:(bool)arg1;
- (bool)showsTabGroupSwitcherToolbar;
- (void)updateToolbarTheme;

@end
