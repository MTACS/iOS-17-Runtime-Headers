
@interface UIButtonLabel : UILabel {
    UIButton * _button;
    bool  _externallySetNumberOfLines;
    bool  _fontIsDefaultForIdiom;
    bool  _reverseShadow;
}

@property (nonatomic, readonly) bool _fontIsDefaultForIdiom;

- (void).cxx_destruct;
- (void)_contentDidChange:(long long)arg1 fromContent:(id)arg2;
- (bool)_fontIsDefaultForIdiom;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 button:(id)arg2;
- (void)_internallySetNumberOfLines:(long long)arg1;
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;
- (void)_setFont:(id)arg1 isDefaultForIdiom:(bool)arg2;
- (void)_setWantsAutolayout;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_textColorFollowsTintColor;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setFont:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setReverseShadow:(bool)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;

@end
