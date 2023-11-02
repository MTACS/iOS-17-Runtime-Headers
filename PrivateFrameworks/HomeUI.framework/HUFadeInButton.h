
@interface HUFadeInButton : UIButton {
    CAGradientLayer * _fadeLayer;
    bool  _shouldFadeRightToLeft;
}

@property (retain) CAGradientLayer *fadeLayer;
@property (nonatomic) bool shouldFadeRightToLeft;

+ (id)button;

- (void).cxx_destruct;
- (id)fadeLayer;
- (void)layoutSubviews;
- (void)setFadeLayer:(id)arg1;
- (void)setShouldFadeRightToLeft:(bool)arg1;
- (bool)shouldFadeRightToLeft;
- (void)traitCollectionDidChange:(id)arg1;

@end
