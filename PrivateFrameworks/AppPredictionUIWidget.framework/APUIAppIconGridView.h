
@interface APUIAppIconGridView : UIView <APUIAppIconDataSourceDelegate, SBIconListLayoutObserver, SBIconViewDelegate, SBIconViewProviding, SBIconViewQuerying> {
    NSArray * _bundleIds;
    APUIAppIconDataSource * _dataSource;
    <APUIAppIconGridViewDelegate> * _delegate;
    UILabel * _emptyStateLabel;
    SBIconListView * _gridView;
    APUIAppIconGridLayoutProvider * _layoutProvider;
    _UILegibilitySettings * _legibilitySettings;
    unsigned long long  _mode;
    SBIconListModel * _model;
    bool  _occluded;
    SBReusableViewMap * _reusableIconViewMap;
    bool  _shouldDisplayEmptyState;
}

@property (nonatomic, copy) NSArray *bundleIds;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APUIAppIconGridViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long mode;
@property (getter=isOccluded, nonatomic) bool occluded;
@property (nonatomic) bool shouldDisplayEmptyState;
@property (readonly) Class superclass;

+ (id)createDismissSuggestionApplicationShortcutItemWithType:(id)arg1 localizedName:(id)arg2;

- (void).cxx_destruct;
- (void)_addGridView;
- (void)_configureAliasingForIconView:(id)arg1;
- (id)_emptyStateLabel;
- (double)_iconLabelAlphaForMode:(unsigned long long)arg1;
- (void)_significantTimeChange:(id)arg1;
- (bool)appIconDataSource:(id)arg1 launchAppFromIcon:(id)arg2;
- (id)bundleIdAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)bundleIds;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)delegate;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (void)highlightIconForBundleId:(id)arg1;
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;
- (void)iconListView:(id)arg1 didRemoveIconView:(id)arg2;
- (void)iconListViewDidChangeBoundsSize:(id)arg1;
- (void)iconTapped:(id)arg1;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (bool)iconViewDisplaysBadges:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isOccluded;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (unsigned long long)mode;
- (void)recycleIconView:(id)arg1;
- (void)setBundleIds:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setOccluded:(bool)arg1;
- (void)setShouldDisplayEmptyState:(bool)arg1;
- (bool)shouldDisplayEmptyState;

@end
