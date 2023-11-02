
@protocol MTLIOCommandBufferSPI <MTLIOCommandBuffer>

@required

- (void)barrier;
- (void)encodeSignalEvent:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2;
- (unsigned long long)globalTraceObjectID;

@end
