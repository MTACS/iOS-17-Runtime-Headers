
@interface ScrollSpringFactory : SpringFactory {
    double  _initialVelocity;
}

@property (nonatomic) double initialVelocity;

+ (id)sharedFactory;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (double)initialVelocity;
- (void)setInitialVelocity:(double)arg1;

@end
