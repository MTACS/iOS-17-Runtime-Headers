
@protocol _MXExtensionStreamingRequestHandling <NSObject>

@required

- (void)startSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 requestDispatcher:(NSObject<_MXExtensionStreamingRequestDispatching><NSSecureCoding> *)arg2 toObserver:(id <_MXExtensionResponseObserver>)arg3;
- (void)stopSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 requestDispatcher:(NSObject<_MXExtensionStreamingRequestDispatching><NSSecureCoding> *)arg2;

@end
