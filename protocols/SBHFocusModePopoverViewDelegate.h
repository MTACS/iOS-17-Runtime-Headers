
@protocol SBHFocusModePopoverViewDelegate <NSObject>

@required

- (void)focusModePopoverView:(SBHFocusModePopoverView *)arg1 closeButtonTappedForIconListView:(SBIconListView *)arg2;
- (void)focusModePopoverView:(SBHFocusModePopoverView *)arg1 editPageButtonTappedForIconListView:(SBIconListView *)arg2;
- (SBHFocusMode *)focusModePopoverViewActiveFocusMode:(SBHFocusModePopoverView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusModePopoverViewFolderScrollAccessoryFrame:(SBHFocusModePopoverView *)arg1;

@end
