
@interface WFDrawerGrabberView : UIView {
    NSArray * _accessibilityCustomActions;
    WFDrawerController * _drawerController;
    _UIGrabber * _grabber;
}

@property (nonatomic) WFDrawerController *drawerController;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (bool)accessibilityCollapseDrawer;
- (id)accessibilityCustomActions;
- (bool)accessibilityExpandDrawer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)drawerController;
- (id)init;
- (bool)isAccessibilityElement;
- (void)setDrawerController:(id)arg1;

@end
