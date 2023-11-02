
@protocol PKPassEntitlementTimeSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)didTapPassEntitlementTimeSectionController:(PKPassEntitlementTimeSectionController *)arg1;
- (void)reloadDataAnimated:(bool)arg1;

@end
