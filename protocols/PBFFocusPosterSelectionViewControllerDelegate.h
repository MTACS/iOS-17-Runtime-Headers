
@protocol PBFFocusPosterSelectionViewControllerDelegate <NSObject>

@required

- (void)focusPosterSelectionViewController:(PBFFocusPosterSelectionViewController *)arg1 didDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)focusPosterSelectionViewController:(PBFFocusPosterSelectionViewController *)arg1 willDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForFocusPosterSelectionViewController:(PBFFocusPosterSelectionViewController *)arg1;

@end
