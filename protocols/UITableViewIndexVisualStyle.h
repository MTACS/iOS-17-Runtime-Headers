
@protocol UITableViewIndexVisualStyle <NSObject>

@required

- (UIFont *)font;
- (double)indexWidth;
- (id)initWithTableViewIndex:(UITableViewIndex *)arg1;
- (double)lineSpacing;
- (double)minLineSpacing;
- (void)setFont:(UIFont *)arg1;
- (void)setTableViewIndex:(UITableViewIndex *)arg1;
- (UITableViewIndex *)tableViewIndex;

@optional

+ (UIView *)containerViewForTableViewIndex:(UITableViewIndex *)arg1;

- (void)didDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 entryBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 originalColor:(UIColor *)arg5;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)handleTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2 touchedEntryIndex:(long long)arg3;
- (void)selectedSectionDidChange:(long long)arg1;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (void)willDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 entryBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 originalColor:(UIColor *)arg5;

@end
