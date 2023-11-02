
@interface CKMomentShareStatusBalloonView : CKColoredBalloonView {
    UIImageView * _iconImageView;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
}

+ (id)_secondaryLabelString;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInSize:(struct CGSize { double x1; double x2; })arg1 updateSubviewFrames:(bool)arg2;
- (BOOL)color;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
