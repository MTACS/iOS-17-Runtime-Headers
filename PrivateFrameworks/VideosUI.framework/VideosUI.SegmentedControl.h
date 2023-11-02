
@interface VideosUI.SegmentedControl : UISegmentedControl {
    void delegate;
    void handleActionForHostedView;
    void textPadding;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithItems:(id)arg1;
- (void)segmentSelectionChanged;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
