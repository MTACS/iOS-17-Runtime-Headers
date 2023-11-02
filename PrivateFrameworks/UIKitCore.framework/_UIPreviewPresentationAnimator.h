
@interface _UIPreviewPresentationAnimator : NSObject {
    id /* block */  _advanceBlock;
    CADisplayLink * _displayLink;
    double  _duration;
    CAMediaTimingFunction * _mediaTimingFunction;
    double  _startMediaTime;
}

@property (nonatomic, copy) id /* block */ advanceBlock;
@property (nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double duration;
@property (nonatomic, retain) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) double startMediaTime;

- (void).cxx_destruct;
- (void)_advanceFromDisplayLink:(id)arg1;
- (id /* block */)advanceBlock;
- (id)displayLink;
- (double)duration;
- (id)init;
- (id)initWithDuration:(double)arg1 advanceBlock:(id /* block */)arg2;
- (id)mediaTimingFunction;
- (void)setAdvanceBlock:(id /* block */)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMediaTimingFunction:(id)arg1;
- (void)setStartMediaTime:(double)arg1;
- (double)startMediaTime;
- (void)stopAnimation;

@end
