
@protocol PUAccessoryContentViewController <NSObject>

@required

- (<PUAccessoryContentViewControllerDelegate> *)accessoryContentViewControllerDelegate;
- (bool)contentAreaContainsPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)setAccessoryContentViewControllerDelegate:(id <PUAccessoryContentViewControllerDelegate>)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 changeReason:(long long)arg2;

@optional

- (struct CGSize { double x1; double x2; })minimumContentSize;
- (void)setMaxVisibleContentInsetsWhenInEdit:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
