
@protocol CMIOExtensionProviderHostDelegate <NSObject>

@required

- (void)extension:(CMIOExtensionProviderHostContext *)arg1 availableDevicesChanged:(NSArray *)arg2;
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 availableStreamsChangedWithDeviceID:(NSString *)arg2 streamIDs:(NSArray *)arg3;
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 devicePropertiesChangedWithDeviceID:(NSString *)arg2 propertyStates:(NSDictionary *)arg3;
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 didFailWithError:(NSError *)arg2;
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 pluginPropertiesChanged:(NSDictionary *)arg2;
- (void)extension:(void *)arg1 pullSampleWithStreamID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: CMIOExtensionProviderHostContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CMIOExtensionSample *, bool, NSError *, void*
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 receivedSampleWithStreamID:(NSString *)arg2 sample:(CMIOExtensionSample *)arg3;
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 streamPropertiesChangedWithStreamID:(NSString *)arg2 propertyStates:(NSDictionary *)arg3;
- (void)extension:(CMIOExtensionProviderHostContext *)arg1 streamScheduledOutputChangedWithStreamID:(NSString *)arg2 scheduledOutput:(CMIOExtensionScheduledOutput *)arg3;
- (void)extensionHasBeenInvalidated:(CMIOExtensionProviderHostContext *)arg1;

@end
