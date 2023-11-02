
@interface _UIHyperPanGesture : _UIHyperGesture {
    unsigned long long  __axes;
    double  __multiplier;
    UIPanGestureRecognizer * __panGestureRecognizer;
}

@property (setter=_setAxes:, nonatomic) unsigned long long _axes;
@property (setter=_setMultiplier:, nonatomic) double _multiplier;
@property (setter=_setPanGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *_panGestureRecognizer;

- (void).cxx_destruct;
- (unsigned long long)_axes;
- (void)_getCurrentTranslation:(double*)arg1;
- (void)_getCurrentVelocity:(double*)arg1;
- (double)_multiplier;
- (id)_panGestureRecognizer;
- (void)_setAxes:(unsigned long long)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setPanGestureRecognizer:(id)arg1;
- (id)init;
- (id)initWithAxes:(unsigned long long)arg1;
- (id)initWithInteractor:(id)arg1;

@end
