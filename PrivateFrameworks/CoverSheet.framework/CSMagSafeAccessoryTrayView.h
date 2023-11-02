
@interface CSMagSafeAccessoryTrayView : CSMagSafeAccessoryView {
    CABackdropLayer * _averageColorBackdropLayer;
    CABackdropLayer * _backgroundBackdropLayer;
    CABackdropLayer * _backgroundRadiusBackdropLayer;
    bool  _clearColorAnimationNeeded;
    CALayer * _splashRing1;
    CALayer * _splashRing2;
    CALayer * _splashRing3;
    CALayer * _splashRing4;
    CSRingLayer * _trackRing;
    CABackdropLayer * _trackRingBlurBackdropLayer;
    CSRingLayer * _trackRingBlurLayer;
}

@property (nonatomic, retain) CABackdropLayer *averageColorBackdropLayer;
@property (nonatomic, retain) CABackdropLayer *backgroundBackdropLayer;
@property (nonatomic, retain) CABackdropLayer *backgroundRadiusBackdropLayer;
@property (nonatomic) bool clearColorAnimationNeeded;
@property (nonatomic, retain) CALayer *splashRing1;
@property (nonatomic, retain) CALayer *splashRing2;
@property (nonatomic, retain) CALayer *splashRing3;
@property (nonatomic, retain) CALayer *splashRing4;
@property (nonatomic, retain) CSRingLayer *trackRing;
@property (nonatomic, retain) CABackdropLayer *trackRingBlurBackdropLayer;
@property (nonatomic, retain) CSRingLayer *trackRingBlurLayer;

- (void).cxx_destruct;
- (void)_dismissAnimation;
- (void)_presentAnimation;
- (void)_runAnimationWithType:(unsigned long long)arg1;
- (double)_trackRingLineWidthAnimationOffset;
- (double)animationDurationBeforeDismissal;
- (id)averageColorBackdropLayer;
- (id)backgroundBackdropLayer;
- (id)backgroundRadiusBackdropLayer;
- (bool)clearColorAnimationNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTrayColor:(id)arg1;
- (void)layoutSubviews;
- (void)performAnimation:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setAverageColorBackdropLayer:(id)arg1;
- (void)setBackgroundBackdropLayer:(id)arg1;
- (void)setBackgroundRadiusBackdropLayer:(id)arg1;
- (void)setClearColorAnimationNeeded:(bool)arg1;
- (void)setSplashRing1:(id)arg1;
- (void)setSplashRing2:(id)arg1;
- (void)setSplashRing3:(id)arg1;
- (void)setSplashRing4:(id)arg1;
- (void)setTrackRing:(id)arg1;
- (void)setTrackRingBlurBackdropLayer:(id)arg1;
- (void)setTrackRingBlurLayer:(id)arg1;
- (id)splashRing1;
- (id)splashRing2;
- (id)splashRing3;
- (id)splashRing4;
- (id)trackRing;
- (id)trackRingBlurBackdropLayer;
- (id)trackRingBlurLayer;

@end
