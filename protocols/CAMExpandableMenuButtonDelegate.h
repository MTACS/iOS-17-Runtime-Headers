
@protocol CAMExpandableMenuButtonDelegate

@required

- (void)collapseMenuButton:(CAMExpandableMenuButton *)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(CAMExpandableMenuButton *)arg1;
- (void)expandMenuButton:(CAMExpandableMenuButton *)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(CAMExpandableMenuButton *)arg1;

@end
