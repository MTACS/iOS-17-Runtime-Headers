
@interface _SSSFlashSuperColorView : UIView {
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long style;

- (void)_updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)traitCollectionDidChange:(id)arg1;

@end
