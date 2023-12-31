
@interface NUFadeViewAnimator : NSObject {
    double  _fadeInDelay;
    double  _fadeInDuration;
    double  _fadeOutDuration;
}

@property (nonatomic) double fadeInDelay;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;

- (void)fadeFromView:(id)arg1 toView:(id)arg2 completion:(id /* block */)arg3;
- (double)fadeInDelay;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)init;
- (void)setFadeInDelay:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;

@end
