
@interface CKVibrantBalloonContainerView : UIView {
    UIVisualEffectView * _blurView;
    CKBalloonView<CKBalloonVibrancy> * _vibrantBalloonView;
    UIVisualEffectView * _vibrantView;
}

- (void).cxx_destruct;
- (void)_commonInitWithVibrantBalloon:(id)arg1;
- (void)_setupVisualEffectViews;
- (id)initWithAudioBallonView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithTextBalloonView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBlurEffect:(id)arg1;
- (void)setColorOverlay:(id)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
