
@interface _TUICursorEffectAnimationState : NSObject {
    CABasicAnimation * _animation;
    double  _startTime;
}

@property (nonatomic, retain) CABasicAnimation *animation;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
