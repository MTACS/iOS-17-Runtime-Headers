
@interface MUScrollableSegmentedPickerSegmentView : UIControl {
    MUEdgeLayout * _edgeLayout;
    UILabel * _label;
    MUScrollableSegmentedPickerCategory * _viewModel;
}

@property (nonatomic, retain) MUScrollableSegmentedPickerCategory *viewModel;

- (void).cxx_destruct;
- (void)_setupLabel;
- (void)_updateAppearance;
- (void)_updateFont;
- (void)_updateSelectionAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
