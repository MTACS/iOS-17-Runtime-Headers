
@interface SUDelayedNavigationItem : SUNavigationItem {
    bool  _delayedBackButtonHidden;
    id  _delayedBackButtonTitle;
    id  _delayedLeftBarButtonItems;
    NSNumber * _delayedLeftItemsSupplementBackButton;
    id  _delayedRightBarButtonItems;
    id  _delayedTitle;
    id  _delayedTitleView;
    bool  _shouldDelayChanges;
    SUNavigationItem * _wrappedNavigationItem;
}

@property (nonatomic) bool shouldDelayChanges;
@property (nonatomic, retain) SUNavigationItem *wrappedNavigationItem;

- (void).cxx_destruct;
- (void)_prepareButtonItemForDisplay:(id)arg1;
- (void)_scheduleCommit;
- (id)backButtonTitle;
- (void)commitDelayedChanges;
- (void)dealloc;
- (id)initWithNavigationItem:(id)arg1;
- (id)leftBarButtonItem;
- (id)leftBarButtonItems;
- (bool)leftItemsSupplementBackButton;
- (id)navigationBar;
- (id)rightBarButtonItem;
- (id)rightBarButtonItems;
- (void)setBackButtonTitle:(id)arg1;
- (void)setHidesBackButton:(bool)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setLeftItemsSupplementBackButton:(bool)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setShouldDelayChanges:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleView:(id)arg1 animated:(bool)arg2;
- (void)setWrappedNavigationItem:(id)arg1;
- (bool)shouldDelayChanges;
- (id)title;
- (id)titleView;
- (id)wrappedNavigationItem;

@end
