
@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell {
    UIInputSwitcherSegmentControl * _segmentControl;
}

@property (nonatomic, readonly) UIInputSwitcherSegmentControl *segmentControl;

+ (struct CGSize { double x1; double x2; })preferredSizeWithSegmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)segmentControl;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setUsesDarkTheme:(bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
