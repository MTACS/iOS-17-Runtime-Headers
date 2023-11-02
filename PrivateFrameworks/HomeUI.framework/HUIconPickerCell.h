
@interface HUIconPickerCell : UICollectionViewCell {
    HUIconView * _iconView;
    UIColor * _selectedTintColor;
}

@property (nonatomic, retain) HFImageIconDescriptor *iconDescriptor;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) UIColor *selectedTintColor;

- (void).cxx_destruct;
- (id)_iconTintColor;
- (void)_updateIconDescriptor:(id)arg1;
- (id)iconDescriptor;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedTintColor;
- (void)setIconDescriptor:(id)arg1;
- (void)setIconDescriptor:(id)arg1 andSelectedTintColor:(id)arg2;
- (void)setIconView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedTintColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
