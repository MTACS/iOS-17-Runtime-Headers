
@protocol MTLIOCommandQueueSPI <MTLIOCommandQueue>

@required

- (void)barrier;
- (<MTLDevice> *)device;
- (unsigned long long)globalTraceObjectID;

@end
