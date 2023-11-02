
@interface CSMagSafeAccessoryWalletView : CSMagSafeAccessoryView {
    CABackdropLayer * _averageColorBackdropLayer;
    CABackdropLayer * _backgroundBackdropLayer;
    CABackdropLayer * _backgroundRadiusBackdropLayer;
    CSMagSafeAccessoryConfiguration * _configuration;
    CSMagSafeSilhouetteConfiguration * _silhouette;
    CSRingLayer * _trackRing;
    CABackdropLayer * _trackRingBlurBackdropLayer;
    CSRingLayer * _trackRingBlurLayer;
    CALayer * _walletLayer;
}

@property (nonatomic, retain) CABackdropLayer *averageColorBackdropLayer;
@property (nonatomic, retain) CABackdropLayer *backgroundBackdropLayer;
@property (nonatomic, retain) CABackdropLayer *backgroundRadiusBackdropLayer;
@property (nonatomic, retain) CSMagSafeAccessoryConfiguration *configuration;
@property (nonatomic, retain) CSMagSafeSilhouetteConfiguration *silhouette;
@property (nonatomic, retain) CSRingLayer *trackRing;
@property (nonatomic, retain) CABackdropLayer *trackRingBlurBackdropLayer;
@property (nonatomic, retain) CSRingLayer *trackRingBlurLayer;
@property (nonatomic, retain) CALayer *walletLayer;

- (void).cxx_destruct;
- (void)_dismissAnimation;
- (void)_presentAnimation;
- (void)_runAnimationWithType:(unsigned long long)arg1;
- (double)animationDurationBeforeDismissal;
- (id)averageColorBackdropLayer;
- (id)backgroundBackdropLayer;
- (id)backgroundRadiusBackdropLayer;
- (id)configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setAverageColorBackdropLayer:(id)arg1;
- (void)setBackgroundBackdropLayer:(id)arg1;
- (void)setBackgroundRadiusBackdropLayer:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setSilhouette:(id)arg1;
- (void)setTrackRing:(id)arg1;
- (void)setTrackRingBlurBackdropLayer:(id)arg1;
- (void)setTrackRingBlurLayer:(id)arg1;
- (void)setWalletLayer:(id)arg1;
- (id)silhouette;
- (id)trackRing;
- (id)trackRingBlurBackdropLayer;
- (id)trackRingBlurLayer;
- (id)walletLayer;

@end
