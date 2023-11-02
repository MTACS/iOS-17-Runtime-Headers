
@interface CHUISMutableWidgetVisibilitySettings : CHUISWidgetVisibilitySettings

@property (getter=isSettled, nonatomic) bool settled;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSettled:(bool)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
