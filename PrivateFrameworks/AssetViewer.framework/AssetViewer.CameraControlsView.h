
@interface AssetViewer.CameraControlsView : UIView {
    void cameraController;
    void downButton;
    void entityController;
    void fastMovementButton;
    void leftButton;
    void menuButton;
    void rightButton;
    void upButton;
    void wantsFastMovement;
    void zoomInButton;
    void zoomOutButton;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)buttonPressedWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
