
@interface OBContentView : UIView {
    bool  _aboveHeaderLayout;
    UIView * _bleedView;
    bool  _customizedBackgroundColor;
    UIColor * _darkColor;
    UIColor * _lightColor;
}

@property (nonatomic) bool aboveHeaderLayout;
@property (nonatomic) UIView *bleedView;
@property (nonatomic) bool customizedBackgroundColor;
@property (nonatomic, retain) UIColor *darkColor;
@property (nonatomic, retain) UIColor *lightColor;

- (void).cxx_destruct;
- (bool)_colorIsDefault:(id)arg1;
- (id)_defaultColorForCurrentTraitCollection;
- (bool)aboveHeaderLayout;
- (id)bleedView;
- (bool)customizedBackgroundColor;
- (id)darkColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 aboveHeaderLayout:(bool)arg2;
- (id)lightColor;
- (void)setAboveHeaderLayout:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBleedView:(id)arg1;
- (void)setCustomizedBackgroundColor:(bool)arg1;
- (void)setDarkColor:(id)arg1;
- (void)setLightColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
