
@protocol PKSharePreviewOverviewSectionControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(PKSharePreviewOverviewSectionController *)arg1;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(PKSharePreviewOverviewSectionController *)arg1;

@optional

- (void)sharePreviewSectionControllerDidSelectShowContactPicker:(PKSharePreviewOverviewSectionController *)arg1;

@end
