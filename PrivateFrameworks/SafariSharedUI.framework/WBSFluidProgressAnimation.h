
@interface WBSFluidProgressAnimation : NSObject {
    double  _animationDuration;
    double  _destinationPosition;
    double  _initialPosition;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) double destinationPosition;
@property (nonatomic) double initialPosition;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (double)animationDuration;
- (double)destinationPosition;
- (double)initialPosition;
- (void)setAnimationDuration:(double)arg1;
- (void)setDestinationPosition:(double)arg1;
- (void)setInitialPosition:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;

@end
