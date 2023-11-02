
@interface CLLocationSmoother : NSObject {
    _CLLocationSmootherProxy * _locationManagerSmootherProxy;
}

@property (nonatomic) <CLLocationManagerDelegateInternal> *delegate;
@property (nonatomic, readonly, retain) _CLLocationSmootherProxy *locationManagerSmootherProxy;

- (void)dealloc;
- (id)delegate;
- (id)locationManagerSmootherProxy;
- (void)setDelegate:(id)arg1;
- (void)smoothLocations:(id)arg1;
- (void)smoothLocations:(id)arg1 handler:(id /* block */)arg2;
- (void)smoothLocations:(id)arg1 workoutActivityType:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)smoothLocations:(id)arg1 workoutActivityType:(unsigned long long)arg2 shouldReconstructRoute:(bool)arg3 handler:(id /* block */)arg4;

@end
