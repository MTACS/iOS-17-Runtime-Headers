
@interface HURelativeAnimation : NSObject {
    HUAnimationApplier * _applier;
    double  _relativeDuration;
    double  _relativeStart;
}

@property (nonatomic, readonly) HUAnimationApplier *applier;
@property (nonatomic, readonly) double relativeDuration;
@property (nonatomic, readonly) double relativeStart;

- (void).cxx_destruct;
- (id)applier;
- (id)initWithAnimationApplier:(id)arg1 relativeStart:(double)arg2 relativeDuration:(double)arg3;
- (double)relativeDuration;
- (double)relativeStart;

@end
