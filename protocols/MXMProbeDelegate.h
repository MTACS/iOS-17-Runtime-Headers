
@protocol MXMProbeDelegate <NSObject>

@optional

- (void)probeDidStartUpdating:(MXMProbe *)arg1;
- (void)probeDidStop:(MXMProbe *)arg1 reason:(unsigned long long)arg2;
- (void)probeDidUpdate:(MXMProbe *)arg1 data:(MXMSampleData *)arg2 stop:(bool*)arg3;

@end
