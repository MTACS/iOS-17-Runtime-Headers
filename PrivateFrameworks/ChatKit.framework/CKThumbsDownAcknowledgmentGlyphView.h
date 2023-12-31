
@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView {
    CALayer * _animationLayer;
    CALayer * _contentLayer;
}

@property (nonatomic, retain) CALayer *animationLayer;
@property (nonatomic, retain) CALayer *contentLayer;

- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(id /* block */)arg3;
- (double)animationDuration;
- (id)animationLayer;
- (id)contentLayer;
- (void)setAnimationLayer:(id)arg1;
- (void)setContentLayer:(id)arg1;
- (void)setGlyphColor:(id)arg1;

@end
