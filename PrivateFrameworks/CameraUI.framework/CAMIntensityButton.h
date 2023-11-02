
@interface CAMIntensityButton : UIButton {
    double  _intensityValue;
    long long  _layoutStyle;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double intensityValue;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

- (void)_updateColorsAnimated:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithLayoutStyle:(long long)arg1;
- (double)intensityValue;
- (bool)isActive;
- (long long)layoutStyle;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setIntensityValue:(double)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
