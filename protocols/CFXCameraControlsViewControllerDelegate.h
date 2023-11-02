
@protocol CFXCameraControlsViewControllerDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bottomBarCTMControlsFrameForWindowOrientation:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)cameraControlsViewControllerEffectsButtonWasTapped:(CFXCameraControlsViewController *)arg1;
- (void)cameraControlsViewControllerShutterButtonWasTapped:(CFXCameraControlsViewController *)arg1;
- (void)cameraControlsViewControllerSwitchCameraButtonWasTapped:(CFXCameraControlsViewController *)arg1;
- (PUReviewScreenDoneButton *)doneButtonForCameraControlsViewController:(CFXCameraControlsViewController *)arg1;
- (CAMFlashButton *)flashButtonForCameraControlsViewController:(CFXCameraControlsViewController *)arg1;
- (void)insertCamBottomBar:(UIView *)arg1;
- (bool)needsBlackBackgroundForCTMControls;

@end
