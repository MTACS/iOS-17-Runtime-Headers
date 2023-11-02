
@protocol SBHardwareButtonGestureParametersProvider <NSObject>

@required

- (void)addHardwareButtonGestureParametersObserver:(id <SBHardwareButtonGestureParametersObserver>)arg1;
- (SBHardwareButtonGestureParameters *)hardwareButtonGestureParameters;
- (void)removeHardwareButtonGestureParametersObserver:(id <SBHardwareButtonGestureParametersObserver>)arg1;

@end
