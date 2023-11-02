
@interface HUColoredButton : UIButton {
    bool  _backgroundColorFollowsTintColor;
    double  _highlightedAlpha;
    double  _highlightedTextAlpha;
}

@property (nonatomic) bool backgroundColorFollowsTintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double highlightedAlpha;
@property (nonatomic) double highlightedTextAlpha;

- (bool)backgroundColorFollowsTintColor;
- (double)cornerRadius;
- (double)highlightedAlpha;
- (double)highlightedTextAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;
- (void)setBackgroundColorFollowsTintColor:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedAlpha:(double)arg1;
- (void)setHighlightedTextAlpha:(double)arg1;
- (void)tintColorDidChange;

@end