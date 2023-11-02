
@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetIconAnimationExtraViewsProviding, WGWidgetListFooterViewDelegate> {
    UIView * _containerView;
    WGWidgetListFooterView * _footerView;
    bool  _footerVisible;
    UIViewController * _headerContentViewController;
    WGWidgetListHeaderView * _headerView;
    bool  _headerVisible;
}

@property (getter=_isFooterVisible, setter=_setFooterVisible:, nonatomic) bool _footerVisible;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGMajorListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *extraViews;
@property (nonatomic, readonly, copy) NSArray *extraViewsContainers;
@property (nonatomic, readonly) WGWidgetListFooterView *footerView;
@property (nonatomic, readonly) bool hasWidget;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *headerContentViewController;
@property (nonatomic, readonly) WGWidgetListHeaderView *headerView;
@property (getter=isHeaderVisible, nonatomic) bool headerVisible;
@property (nonatomic, readonly) bool shouldAnimateFirstTwoViewsAsOne;
@property (nonatomic, readonly) bool shouldAnimateLastTwoViewsAsOne;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureStackView;
- (id)_group;
- (void)_insertHeaderView;
- (unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (bool)_isFooterVisible;
- (void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (void)_setFooterVisible:(bool)arg1;
- (void)_updateEditButtonVisibilityAnimated:(bool)arg1;
- (void)_updateFooterViewShouldBlurContent;
- (void)_updateFooterVisibility;
- (void)_updateHeaderVisibility;
- (id)containerView;
- (void)editButtonTapped:(id)arg1;
- (id)editingMaterialViewForWidgetListFooterView:(id)arg1;
- (void)enumerateWidgetWrapperViewsUsingBlock:(id /* block */)arg1;
- (id)extraViews;
- (id)extraViewsContainer;
- (id)extraViewsContainers;
- (id)footerView;
- (bool)hasWidget;
- (id)headerContentViewController;
- (id)headerView;
- (void)invalidateVisibleWidgets;
- (bool)isHeaderVisible;
- (void)presentEditView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setEditingIcons:(bool)arg1;
- (void)setHeaderContentViewController:(id)arg1;
- (void)setHeaderVisible:(bool)arg1;
- (void)setShouldBlurContent:(bool)arg1;
- (bool)shouldAnimateFirstTwoViewsAsOne;
- (bool)shouldAnimateLastTwoViewsAsOne;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1;

@end
