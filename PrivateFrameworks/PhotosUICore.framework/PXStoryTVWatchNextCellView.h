
@interface PXStoryTVWatchNextCellView : PXGFocusEffectView {
    UIImageView * _countdownImage;
    _PXStoryShapeView * _countdownRing;
    PXGradientView * _gradientView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) PXStoryTVWatchNextCellConfiguration *userData;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
