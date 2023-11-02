
@interface PinnedTabsOverflowButton : UIButton {
    bool  _hovering;
    long long  _tintStyle;
    UIVisualEffectView * _trailingSeparator;
}

@property (nonatomic) bool showsTrailingSeparator;
@property (nonatomic) long long tintStyle;

- (void).cxx_destruct;
- (void)_hover:(id)arg1;
- (void)_setHovering:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowsTrailingSeparator:(bool)arg1;
- (void)setTintStyle:(long long)arg1;
- (bool)showsTrailingSeparator;
- (long long)tintStyle;

@end
