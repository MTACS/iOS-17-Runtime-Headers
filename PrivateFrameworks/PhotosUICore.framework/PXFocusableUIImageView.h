
@interface PXFocusableUIImageView : UIImageView {
    bool  _allowsFocus;
    bool  _drawsFocusRing;
    bool  _reusable;
}

@property (nonatomic) bool allowsFocus;
@property (nonatomic) bool drawsFocusRing;
@property (nonatomic) bool reusable;

- (bool)_isEligibleForFocusInteraction;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (bool)drawsFocusRing;
- (id)focusEffect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)reusable;
- (void)setAllowsFocus:(bool)arg1;
- (void)setDrawsFocusRing:(bool)arg1;
- (void)setReusable:(bool)arg1;

@end
