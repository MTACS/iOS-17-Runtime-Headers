
@interface _UIHyperPinchGesture : _UIHyperGesture {
    double  __multiplier;
    UIPinchGestureRecognizer * __pinchGestureRecognizer;
}

@property (setter=_setMultiplier:, nonatomic) double _multiplier;
@property (setter=_setPinchGestureRecognizer:, nonatomic, retain) UIPinchGestureRecognizer *_pinchGestureRecognizer;

- (void).cxx_destruct;
- (void)_getCurrentTranslation:(double*)arg1;
- (void)_getCurrentVelocity:(double*)arg1;
- (double)_multiplier;
- (id)_pinchGestureRecognizer;
- (void)_setMultiplier:(double)arg1;
- (void)_setPinchGestureRecognizer:(id)arg1;
- (id)init;
- (id)initWithInteractor:(id)arg1;

@end
