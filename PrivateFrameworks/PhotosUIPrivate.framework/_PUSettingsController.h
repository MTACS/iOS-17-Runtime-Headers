
@interface _PUSettingsController : PTUISettingsController <PTSettingsKeyPathObserver> {
    UINavigationController * _configurationsNavigationController;
    id /* block */  _dismissButtonFactory;
    id /* block */  _ellipsisBarButtonItemFactory;
    bool  _hasWarnedForOverrides;
    id /* block */  _onViewDidDisappearBlock;
    PTSettings * _rootSettings;
    UINavigationController * _searchNavigationController;
    PXToast * _toast;
}

@property (nonatomic, readonly) UINavigationController *configurationsNavigationController;
@property (nonatomic, readonly) PXSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissButtonFactory;
@property (nonatomic, copy) id /* block */ ellipsisBarButtonItemFactory;
@property (nonatomic) bool hasWarnedForOverrides;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onViewDidDisappearBlock;
@property (nonatomic, readonly) PTSettings *rootSettings;
@property (nonatomic, readonly) UINavigationController *searchNavigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXToast *toast;

- (void).cxx_destruct;
- (void)_clearSettingsOverride;
- (void)_hideToast;
- (void)_invalidateNavigationItems;
- (void)_showReminderToQuitAfterChange;
- (void)_updateNavigationItemOfViewController:(id)arg1;
- (void)_warnForSettingsOverride;
- (void)callOnViewDidDisappearBlock;
- (id)configurationsNavigationController;
- (id)currentSettings;
- (id /* block */)dismissButtonFactory;
- (id /* block */)ellipsisBarButtonItemFactory;
- (void)handleEllipsisBarButtonItem:(id)arg1;
- (bool)hasWarnedForOverrides;
- (id)initWithRootSettings:(id)arg1;
- (id /* block */)onViewDidDisappearBlock;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)rootSettings;
- (id)searchNavigationController;
- (void)setDismissButtonFactory:(id /* block */)arg1;
- (void)setEllipsisBarButtonItemFactory:(id /* block */)arg1;
- (void)setHasWarnedForOverrides:(bool)arg1;
- (void)setOnViewDidDisappearBlock:(id /* block */)arg1;
- (void)setToast:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)toast;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
