
@protocol WFActionDrawerDelegate <NSObject>

@required

- (void)appendAction:(WFAction *)arg1;

@optional

- (double)actionCanvasWidth;
- (void)collapseDrawer;
- (void)expandDrawer;
- (void)presentDrawerViewController:(UIViewController *)arg1 inPopover:(bool)arg2 withSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
