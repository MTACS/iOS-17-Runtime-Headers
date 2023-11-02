
@protocol UIFocusItem <UIFocusEnvironment>

@required

- (bool)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;

@optional

- (void)didHintFocusMovement:(UIFocusMovementHint *)arg1;
- (UIFocusEffect *)focusEffect;
- (long long)focusGroupPriority;
- (bool)isTransparentFocusItem;

@end
