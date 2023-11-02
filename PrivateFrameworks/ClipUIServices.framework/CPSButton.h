
@interface CPSButton : UIButton {
    bool  _animatesAlphaWhenHighlighted;
    NSString * _extraTapTargetSubstring;
    double  _tapTargetSideMargin;
}

@property (nonatomic) bool animatesAlphaWhenHighlighted;
@property (nonatomic, copy) NSString *extraTapTargetSubstring;
@property (nonatomic) double tapTargetSideMargin;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingRectForSubstring:(id)arg1;
- (bool)animatesAlphaWhenHighlighted;
- (id)extraTapTargetSubstring;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 enabledTitleColor:(id)arg2 disabledTitleColor:(id)arg3 backgroundColor:(id)arg4 textStyle:(id)arg5 cornerRadius:(double)arg6 animatesAlphaWhenHighlighted:(bool)arg7;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAnimatesAlphaWhenHighlighted:(bool)arg1;
- (void)setExtraTapTargetSubstring:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTapTargetSideMargin:(double)arg1;
- (double)tapTargetSideMargin;
- (void)updateCornerRadius;

@end
