
@protocol TIKeyboardActivityObserving <NSObject>

@required

- (void)keyboardActivityDidTransition:(TIKeyboardActivityContext *)arg1;

@optional

- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;

@end
