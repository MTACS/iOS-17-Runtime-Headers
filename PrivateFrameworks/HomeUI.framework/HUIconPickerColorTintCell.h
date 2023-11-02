
@interface HUIconPickerColorTintCell : UICollectionViewCell {
    HUColorSwatchView * _colorSwatchView;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) HUColorSwatchView *colorSwatchView;

- (void).cxx_destruct;
- (id)color;
- (id)colorSwatchView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setColorSwatchView:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
