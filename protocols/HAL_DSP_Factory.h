
@protocol HAL_DSP_Factory <NSObject>

@required

- (<HAL_DSP_IOProcessor> *)createProcessor:(NSDictionary *)arg1 withHost:(id <HAL_DSP_HostCallbacks>)arg2;

@end
