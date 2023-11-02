
@interface SUUIJSTabBar : IKJSObject <SUUIJSTabBar> {
    SUUIApplicationController * _applicationController;
    NSArray * _tabs;
    SUUIJSTabBarItem * _transientTab;
}

@property (nonatomic, retain) SUUIJSTabBarItem *selectedTab;
@property (nonatomic, readonly) NSArray *tabs;
@property (nonatomic, readonly) SUUIJSTabBarItem *transientTab;

- (void).cxx_destruct;
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(id /* block */)arg1;
- (id)_selectedTabBarItemForIndex:(long long)arg1;
- (id)initWithAppContext:(id)arg1 controller:(id)arg2;
- (id)selectedTab;
- (void)sendOnNeedsContentForTabBarItem:(id)arg1;
- (void)sendOnUpdate;
- (void)sendOnUpdateWithCompletion:(id /* block */)arg1;
- (void)setSelectedTab:(id)arg1;
- (id)tabs;
- (id)transientTab;

@end
