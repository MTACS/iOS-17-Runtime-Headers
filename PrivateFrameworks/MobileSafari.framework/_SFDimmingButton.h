
@interface _SFDimmingButton : SFClickableButton {
    bool  _alwaysUsesUIMenuOrdering;
    UIColor * _cachedDimmedBackgroundColor;
    UIColor * _dimmableBackgroundColor;
    double  _highlightAnimationDuration;
    double  _highlightedImageAlpha;
    double  _normalImageAlpha;
    NSValue * _tapTargetSideMargins;
}

@property (nonatomic) bool alwaysUsesUIMenuOrdering;
@property (nonatomic, retain) UIColor *dimmableBackgroundColor;
@property (nonatomic) double highlightAnimationDuration;
@property (nonatomic) double highlightedImageAlpha;
@property (nonatomic) double normalImageAlpha;
@property (nonatomic, retain) NSNumber *tapTargetSideMargin;
@property (nonatomic, retain) NSValue *tapTargetSideMargins;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)_updateImageAlpha;
- (bool)alwaysUsesUIMenuOrdering;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)dimmableBackgroundColor;
- (double)highlightAnimationDuration;
- (double)highlightedImageAlpha;
- (void)layoutSubviews;
- (double)normalImageAlpha;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAlwaysUsesUIMenuOrdering:(bool)arg1;
- (void)setDimmableBackgroundColor:(id)arg1;
- (void)setHighlightAnimationDuration:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedImageAlpha:(double)arg1;
- (void)setNormalImageAlpha:(double)arg1;
- (void)setTapTargetSideMargin:(id)arg1;
- (void)setTapTargetSideMargins:(id)arg1;
- (id)tapTargetSideMargin;
- (id)tapTargetSideMargins;

@end
