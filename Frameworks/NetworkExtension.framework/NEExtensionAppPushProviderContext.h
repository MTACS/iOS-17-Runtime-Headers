
@interface NEExtensionAppPushProviderContext : NEExtensionProviderContext <NEExtensionAppPushProviderHostProtocol, NEExtensionAppPushProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)extensionPoint;
- (void)reportIncomingCall:(id)arg1;
- (void)reportPushToTalkMessage:(id)arg1;
- (void)sendOutgoingCallMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTimerEvent;
- (void)setProviderConfiguration:(id)arg1;
- (void)startConnectionWithProviderConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1 completionHandler:(id /* block */)arg2;

@end
