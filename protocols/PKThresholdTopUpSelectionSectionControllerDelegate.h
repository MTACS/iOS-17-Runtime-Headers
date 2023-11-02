
@protocol PKThresholdTopUpSelectionSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)didSelectPaymentMethod;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@end
