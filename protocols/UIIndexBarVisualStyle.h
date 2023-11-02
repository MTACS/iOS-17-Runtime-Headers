
@protocol UIIndexBarVisualStyle <NSObject>

@required

- (bool)canBecomeFocused;
- (UIIndexBarDisplayEntry *)displayEntryFromEntry:(UIIndexBarEntry *)arg1;
- (UIIndexBarView *)indexBarView;
- (double)indexWidth;
- (id)initWithView:(UIIndexBarView *)arg1;
- (double)minLineHeight;
- (bool)overlay;
- (void)setIndexBarView:(UIIndexBarView *)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@optional

+ (UIView *)containerViewForIndexBar:(UIIndexBarView *)arg1;

- (long long)_accessibility_indexForEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)deflectionReset:(bool)arg1;
- (void)deflectionUpdated;
- (void)displayEntriesUpdated;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)entriesUpdated;
- (bool)expanded;
- (void)handleTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2 touchedEntryIndex:(long long)arg3;
- (void)highlightStyleUpdated;
- (void)highlightedIndexUpdated;
- (void)indexColorUpdated;
- (void)layoutSubviews;
- (void)selectedSectionDidChange:(long long)arg1;
- (void)setExpanded:(bool)arg1;
- (void)sizeUpdated;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (bool)updateSectionForTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;

@end
