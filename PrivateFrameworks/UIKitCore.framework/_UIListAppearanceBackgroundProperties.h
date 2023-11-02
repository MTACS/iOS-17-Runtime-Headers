
@interface _UIListAppearanceBackgroundProperties : NSObject {
    bool  _appliesBackgroundColorWithEffect;
    UIColor * _backgroundColor;
    UIVisualEffect * _backgroundEffect;
    bool  _useTintColorAsBackgroundColor;
}

@property (nonatomic) bool appliesBackgroundColorWithEffect;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIVisualEffect *backgroundEffect;
@property (nonatomic) bool useTintColorAsBackgroundColor;

- (void).cxx_destruct;
- (struct _UITableConstantsBackgroundProperties { bool x1; id x2; id x3; bool x4; long long x5; long long x6; double x7; double x8; bool x9; id x10; long long x11; double x12; struct NSDirectionalEdgeInsets { double x_13_1_1; double x_13_1_2; double x_13_1_3; double x_13_1_4; } x13; })_tableConstantsPropertiesWithCornerRadius:(double)arg1;
- (bool)appliesBackgroundColorWithEffect;
- (id)backgroundColor;
- (id)backgroundEffect;
- (void)setAppliesBackgroundColorWithEffect:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setUseTintColorAsBackgroundColor:(bool)arg1;
- (bool)useTintColorAsBackgroundColor;

@end
