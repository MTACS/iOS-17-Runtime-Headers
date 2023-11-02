
@interface CFXCounterRotationLayer : CALayer {
    double  _zRotation;
}

@property (nonatomic) double zRotation;

- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setZRotation:(double)arg1;
- (double)zRotation;

@end
