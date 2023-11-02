
@interface TabBarManager : NSObject {
    BookmarksBarView * _bookmarksBar;
    UnifiedTabBar * _cachedInlineTabBar;
    long long  _displayMode;
    NSSet * _hiddenItems;
    UnifiedTabBar * _inlineTabBar;
    SFUnifiedTabBarItemArrangement * _itemArrangement;
    SFLockdownStatusBar * _lockdownStatusBar;
    _SFFluidProgressView * _minimizedProgressView;
    NSHashTable * _observers;
    bool  _showingLockdownStatusBar;
    UnifiedTabBar * _standaloneTabBar;
    bool  _suppressesStandaloneTabBar;
    UnifiedBar * _unifiedBar;
}

@property (nonatomic, retain) BookmarksBarView *bookmarksBar;
@property (nonatomic) long long displayMode;
@property (nonatomic, readonly) UnifiedTabBar *effectiveTabBar;
@property (nonatomic, retain) NSSet *hiddenItems;
@property (nonatomic, readonly) UnifiedTabBar *inlineTabBar;
@property (nonatomic, retain) SFUnifiedTabBarItemArrangement *itemArrangement;
@property (nonatomic, readonly) SFLockdownStatusBar *lockdownStatusBar;
@property (nonatomic, readonly) _SFFluidProgressView *minimizedProgressView;
@property (nonatomic) bool showingLockdownStatusBar;
@property (nonatomic, readonly) UnifiedTabBar *standaloneTabBar;
@property (nonatomic) bool suppressesStandaloneTabBar;
@property (nonatomic, retain) UnifiedBar *unifiedBar;

- (void).cxx_destruct;
- (bool)_canAnimateInlineTabBarForTransitionToItemArrangement:(id)arg1;
- (bool)_canAnimateStandaloneTabBarForTransitionToItemArrangement:(id)arg1;
- (void)_configureStandaloneTabBar;
- (id)_inlineItemArrangementForItemArrangement:(id)arg1 displayMode:(long long)arg2;
- (void)_notifyDidCreateTabBar:(id)arg1;
- (void)_notifyDidUpdateDisplayMode;
- (void)_setItemArrangement:(id)arg1 animated:(bool)arg2 keepingItemVisible:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setUsesInlineTabBar:(bool)arg1;
- (void)_setUsesStandaloneTabBar:(bool)arg1;
- (void)_updateUnifiedBarContentArrangement;
- (void)_updateUsesStandaloneTabBar;
- (void)addObserver:(id)arg1;
- (id)bookmarksBar;
- (id)createStandaloneTabBar;
- (long long)displayMode;
- (id)effectiveTabBar;
- (id)hiddenItems;
- (id)init;
- (id)inlineTabBar;
- (id)itemArrangement;
- (id)lockdownStatusBar;
- (id)minimizedProgressView;
- (void)removeObserver:(id)arg1;
- (void)scrollToActiveItemAnimated:(bool)arg1;
- (void)setActiveItem:(id)arg1 animated:(bool)arg2;
- (void)setActiveItemIsExpanded:(bool)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setBookmarksBar:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setHiddenItems:(id)arg1;
- (void)setItemArrangement:(id)arg1;
- (void)setItemArrangement:(id)arg1 animated:(bool)arg2 keepingItemVisible:(id)arg3;
- (void)setShowingLockdownStatusBar:(bool)arg1;
- (void)setSuppressesStandaloneTabBar:(bool)arg1;
- (void)setUnifiedBar:(id)arg1;
- (bool)showingLockdownStatusBar;
- (id)standaloneItemArrangementForItemArrangement:(id)arg1 displayMode:(long long)arg2;
- (id)standaloneTabBar;
- (bool)suppressesStandaloneTabBar;
- (id)unifiedBar;

@end
