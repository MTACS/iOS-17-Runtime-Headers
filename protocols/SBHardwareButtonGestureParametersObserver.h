
@protocol SBHardwareButtonGestureParametersObserver <NSObject>

@required

- (void)provider:(id <SBHardwareButtonGestureParametersProvider>)arg1 didUpdateButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg2;

@end
