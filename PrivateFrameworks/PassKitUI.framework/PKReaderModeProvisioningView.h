
@interface PKReaderModeProvisioningView : UIView {
    PKReaderModeAnimationView * _animationView;
    NSString * _cardPlacement;
    UIImage * _digitalCardImage;
    PKReaderModeHeaderView * _headerView;
    bool  _isProvisioningToWatch;
    UIImage * _plasticCardImage;
    UIProgressView * _progressView;
}

+ (id)watchImage:(bool)arg1;

- (void).cxx_destruct;
- (void)_loadAnimation;
- (id)initWithContext:(long long)arg1 product:(id)arg2 isWatch:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2 product:(id)arg3 isWatch:(bool)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 product:(id)arg2;
- (void)layoutSubviews;
- (void)setDigitalCardImage:(id)arg1;
- (void)setPlasticCardImage:(id)arg1;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setTransferringProgress:(double)arg1 duration:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
