
@protocol ATXUnifiedInferredActivityBiomeStreamProtocol <NSObject>

@required

- (BPSPublisher *)sessionPublisherFromStartTime:(double)arg1;
- (BPSPublisher *)transitionPublisherFromStartTime:(double)arg1;

@optional

- (BPSPublisher *)transitionPublisherFromStartTime:(NSNumber *)arg1 endTime:(NSNumber *)arg2 maxEvents:(NSNumber *)arg3 lastN:(NSNumber *)arg4 reversed:(bool)arg5;

@end
