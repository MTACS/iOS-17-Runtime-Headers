
@protocol PKPaymentPreferenceSectionControllerDelegate

@required

- (bool)collectionViewIsEditingForSectionController:(PKPaymentPreferenceSectionController *)arg1;
- (void)presentHideMyEmailAlertController;
- (void)setEditing:(bool)arg1 animated:(bool)arg2 forSectionController:(PKPaymentPreferenceSectionController *)arg3;

@end
