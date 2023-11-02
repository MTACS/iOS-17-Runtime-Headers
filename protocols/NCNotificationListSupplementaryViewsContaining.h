
@protocol NCNotificationListSupplementaryViewsContaining <NSObject>

@required

- (struct CGSize { double x1; double x2; })allowedSupplementaryViewSize;
- (id /* block */)groupSortComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSString *, NSString *, void*, id, SEL
- (NSArray *)groupingIdentifiers;
- (PLPlatterView *)hostingPlatterViewForSupplementaryViewController:(UIViewController *)arg1;
- (NSString *)identifier;
- (void)insertSupplementaryViewController:(UIViewController *)arg1 withConfiguration:(NCNotificationListSupplementaryViewConfiguration *)arg2;
- (void)presentViewControllerModally:(void *)arg1 fromSupplementaryViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: UIViewController *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeSupplementaryViewController:(UIViewController *)arg1;
- (void)setGroupSortComparator:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, NSString *, NSString *, void*
- (void)setSupplementaryContainerDelegate:(id <NCNotificationListSupplementaryViewsContainingDelegate>)arg1;
- (void)setSupportsViewGrouping:(bool)arg1;
- (void)setViewControllerSortComparator:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, UIViewController *, UIViewController *, void*
- (<NCNotificationListSupplementaryViewsContainingDelegate> *)supplementaryContainerDelegate;
- (NSArray *)supplementaryViewControllers;
- (NSDictionary *)supplementaryViewControllersByGroupingIdentifiers;
- (unsigned long long)supplementaryViewControllersCount;
- (bool)supportsViewGrouping;
- (void)updatePositionIfNeededForSupplementaryViewController:(UIViewController *)arg1;
- (void)updateSupplementaryViewController:(UIViewController *)arg1 withConfiguration:(NCNotificationListSupplementaryViewConfiguration *)arg2;
- (id /* block */)viewControllerSortComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, UIViewController *, UIViewController *, void*, id, SEL

@end
