
@protocol PKPassEntitlementSelectionSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)entitlementSelectionDidChange;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)showAdvancedScheduleSelectionFlowForEntitlementEntry:(PKPassEntitlementsComposerEntry *)arg1;

@end
