
@interface EKEventTravelDetailItem : EKEventDetailItem

- (bool)_canChangeTravelTime;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (id)generatePopupMenu;

@end
