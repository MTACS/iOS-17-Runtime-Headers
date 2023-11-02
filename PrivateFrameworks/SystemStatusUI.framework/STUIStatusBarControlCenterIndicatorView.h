
@interface STUIStatusBarControlCenterIndicatorView : STUIStatusBarImageView {
    bool  _hidingWithMask;
    CAGradientLayer * _maskGradientLayer;
    CALayer * _maskSolidLayer;
}

@property (nonatomic) bool hideWithWipe;

- (void).cxx_destruct;
- (void)_setupMaskView;
- (void)_updateMaskFrame;
- (void)_updateMaskLayersFrames;
- (bool)hideWithWipe;
- (void)layoutSubviews;
- (void)setHideWithWipe:(bool)arg1;

@end
