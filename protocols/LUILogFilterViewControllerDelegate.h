
@protocol LUILogFilterViewControllerDelegate <NSObject>

@required

- (NSArray *)currentPredicates:(LUILogFilterViewController *)arg1;
- (void)logFilterViewController:(LUILogFilterViewController *)arg1 didAddPredicates:(NSArray *)arg2;
- (void)logFilterViewController:(LUILogFilterViewController *)arg1 didDeletePredicate:(NSPredicate *)arg2;
- (void)logFilterViewControllerApplyButtonTapped:(LUILogFilterViewController *)arg1;
- (bool)logFilterViewControllerShouldAllowTextEditing:(LUILogFilterViewController *)arg1;

@end
