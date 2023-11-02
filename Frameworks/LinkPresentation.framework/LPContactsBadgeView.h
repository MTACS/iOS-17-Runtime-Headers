
@interface LPContactsBadgeView : LPComponentView {
    UIView * _avatarView;
    UIImageView * _highlightIndicatorView;
    UIView * _highlightShadowView;
    CAShapeLayer * _maskLayer;
    LPContactsBadgeStyle * _style;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 contacts:(id)arg2 highlighted:(bool)arg3 style:(id)arg4;
- (void)layoutComponentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutExclusionRect;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
