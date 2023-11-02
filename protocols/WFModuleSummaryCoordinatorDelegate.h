
@protocol WFModuleSummaryCoordinatorDelegate <NSObject>

@required

- (UIViewController *)viewControllerForCoordinator:(WFModuleSummaryCoordinator *)arg1;

@optional

- (void)summaryCoordinator:(WFModuleSummaryCoordinator *)arg1 disclosureArrowDidChange:(bool)arg2;
- (void)summaryCoordinator:(WFModuleSummaryCoordinator *)arg1 outputButtonDidChange:(bool)arg2;
- (void)summaryCoordinatorDidEndEditing:(WFModuleSummaryCoordinator *)arg1;
- (void)summaryCoordinatorDidInvalidateSize:(WFModuleSummaryCoordinator *)arg1;
- (void)summaryCoordinatorWillBeginEditing:(WFModuleSummaryCoordinator *)arg1;

@end
