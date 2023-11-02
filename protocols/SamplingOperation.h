
@protocol SamplingOperation

@required

- (int)State;
- (double)Timeout;
- (NSError *)cancelActiveOperation:(NSString *)arg1;
- (NSError *)createPresenceDetectOperationWithTimeout:(double)arg1 options:(struct { bool x1; bool x2; })arg2;
- (bool)isOperationActive;
- (int)operationBackend;
- (void)setDelegate:(id <PearlCameraInterfaceMessaging>)arg1;
- (NSError *)startPresenceDetectOperation;
- (<AWUnitTestSampler> *)unitTestSampler;

@end
