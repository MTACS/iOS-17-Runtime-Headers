
@interface _UIHIDScaleEventTracker : NSObject {
    unsigned long long  _compositePhase;
    double  _scaleZ;
}

@property (nonatomic, readonly) unsigned long long compositePhase;
@property (nonatomic, readonly) double scaleZ;

- (void)_setCompositePhase:(unsigned long long)arg1 withEvent:(struct __IOHIDEvent { }*)arg2;
- (unsigned long long)compositePhase;
- (void)reset;
- (double)scaleZ;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { }*)arg1;

@end
