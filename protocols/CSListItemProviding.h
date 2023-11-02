
@protocol CSListItemProviding <NSObject>

@required

- (unsigned long long)itemCount;
- (<CSListItemManaging> *)itemManager;
- (CSListItemSection *)section;
- (void)setItemManager:(id <CSListItemManaging>)arg1;

@optional

- (void)handleRemovedItems:(NSArray *)arg1;
- (id /* block */)itemsGroupSortComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSString *, NSString *, void*, id, SEL
- (id /* block */)itemsViewControllerSortComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, UIViewController *, UIViewController *, void*, id, SEL
- (bool)listHasAdditionalContent;
- (void)restrictsTouches:(bool)arg1 onHostedSceneInViewController:(UIViewController *)arg2;
- (void)restrictsTouchesOnAllHostedScenes:(bool)arg1;
- (void)setListHasAdditionalContent:(bool)arg1;
- (void)willPresentPosterSwitcher;

@end
