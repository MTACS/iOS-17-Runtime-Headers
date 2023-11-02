
@protocol CMIOExtensionHostProtocol <NSObject>

@required

- (void)availableDevicesChanged:(NSArray *)arg1;
- (void)availableStreamsChangedWithDeviceID:(NSString *)arg1 streamIDs:(NSArray *)arg2;
- (void)devicePropertiesChangedWithDeviceID:(NSString *)arg1 propertyStates:(NSDictionary *)arg2;
- (void)pluginPropertiesChanged:(NSDictionary *)arg1;
- (void)pullSampleBufferForStreamID:(void *)arg1 replyq:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CMIOExtensionSample *, bool, NSError *, void*
- (void)receivedSampleWithStreamID:(NSString *)arg1 sample:(CMIOExtensionSample *)arg2;
- (void)streamPropertiesChangedWithStreamID:(NSString *)arg1 propertyStates:(NSDictionary *)arg2;
- (void)streamScheduledOutputChangedWithStreamID:(NSString *)arg1 scheduledOutput:(CMIOExtensionScheduledOutput *)arg2;

@end
