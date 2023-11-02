
@interface WidgetKit._WidgetExtensionBaseContext : NSExtensionContext <EXExtensionContextHostConfigurationProviding>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (bool)_shouldSendHostApplicationStateNotifications;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
