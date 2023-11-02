
@protocol ATXMemoryPressureObserver <NSObject>

@optional

- (void)handleMemoryPressure;
- (void)handleMemoryPressureOfType:(unsigned long long)arg1;

@end
