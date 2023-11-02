
@protocol ARUIRingGroupAnimation <NSObject>

@required

- (void)completeAnimation;
- (<ARUIRingGroupAnimationDelegate> *)delegate;
- (bool)isAnimating;
- (void)setDelegate:(id <ARUIRingGroupAnimationDelegate>)arg1;
- (void)update:(double)arg1;

@end
