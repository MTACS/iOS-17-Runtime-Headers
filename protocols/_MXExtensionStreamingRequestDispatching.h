
@protocol _MXExtensionStreamingRequestDispatching <NSObject>

@required

- (void)startSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2 toObserver:(id <_MXExtensionResponseObserver>)arg3;
- (void)stopSendingUpdatesForRequest:(NSObject<NSSecureCoding> *)arg1 vendor:(id <NSObject>)arg2;

@optional

- (Protocol *)serviceProtocol;

@end
