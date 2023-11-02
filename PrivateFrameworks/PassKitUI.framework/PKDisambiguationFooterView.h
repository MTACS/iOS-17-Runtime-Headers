
@interface PKDisambiguationFooterView : UIView {
    UIButton * _actionButton;
    double  _bottomPadding;
    UILabel * _descriptionLabel;
    UIButton * _secondaryActionButton;
    double  _secondaryActionTopPadding;
    double  _topPadding;
}

@property (nonatomic) double bottomPadding;
@property (nonatomic, readonly, retain) UILabel *descriptionLabel;
@property (nonatomic) double secondaryActionTopPadding;
@property (nonatomic) double topPadding;

+ (id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 action:(id)arg3;
+ (id)descriptionLabel;

- (void).cxx_destruct;
- (double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1;
- (double)bottomPadding;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 action:(id)arg2 secondaryAction:(id)arg3 title:(id)arg4 secondaryTitle:(id)arg5 desscription:(id)arg6;
- (void)layoutSubviews;
- (double)secondaryActionTopPadding;
- (void)setBottomPadding:(double)arg1;
- (void)setSecondaryActionTopPadding:(double)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFitForTableView:(id)arg1;
- (double)topPadding;

@end
