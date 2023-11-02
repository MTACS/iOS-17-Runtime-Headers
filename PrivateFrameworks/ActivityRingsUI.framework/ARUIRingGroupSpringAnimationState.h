
@interface ARUIRingGroupSpringAnimationState : ARUIRingGroupAnimationState {
    double  _friction;
    double  _tension;
}

@property (nonatomic) double friction;
@property (nonatomic) double tension;

- (double)friction;
- (void)setFriction:(double)arg1;
- (void)setTension:(double)arg1;
- (double)tension;

@end
