
@protocol PKSpringAnimationFactory

@required

- (double)damping;
- (double)duration;
- (CASpringAnimation *)highFrameRateSpringAnimationWithKeyPath:(NSString *)arg1 reason:(unsigned short)arg2;
- (double)mass;
- (double)speed;
- (CASpringAnimation *)springAnimationWithKeyPath:(NSString *)arg1;
- (double)stiffness;
- (CAMediaTimingFunction *)timing;
- (double)velocity;

@end
