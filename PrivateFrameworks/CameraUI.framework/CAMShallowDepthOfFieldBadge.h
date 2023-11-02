
@interface CAMShallowDepthOfFieldBadge : UIView {
    CEKBadgeTextView * __disabledTextView;
    CEKBadgeTextView * __enabledTextView;
    long long  _shallowDepthOfFieldStatus;
}

@property (nonatomic, readonly) CEKBadgeTextView *_disabledTextView;
@property (nonatomic, readonly) CEKBadgeTextView *_enabledTextView;
@property (nonatomic) long long shallowDepthOfFieldStatus;

- (void).cxx_destruct;
- (id)_disabledTextView;
- (id)_enabledTextView;
- (void)_updateForShallowDepthOfFieldStatusAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setShallowDepthOfFieldStatus:(long long)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(bool)arg2;
- (long long)shallowDepthOfFieldStatus;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
