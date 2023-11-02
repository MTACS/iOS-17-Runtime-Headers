
@interface MKPlaceSectionItemView : MKViewWithHairline {
    bool  _fullWidthHairline;
}

@property (getter=isHairlineFullWidth, nonatomic) bool fullWidthHairline;

- (void)_updateHairlineInsets;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHairlineFullWidth;
- (void)layoutMarginsDidChange;
- (void)setFullWidthHairline:(bool)arg1;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;

@end
