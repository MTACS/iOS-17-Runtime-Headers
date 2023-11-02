
@interface CMIOExtensionProviderContext : NSObject <CMIOExtensionHostProtocol> {
    CMIOExtensionClient * _clientInfo;
    bool  _clientSourcedByNonStreamingProxyFrontedExtension;
    NSObject<OS_xpc_object> * _connection;
    NSString * _description;
    bool  _invalidated;
    NSString * _redactedDescription;
    NSObject<OS_os_transaction> * _transaction;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, readonly) CMIOExtensionClient *clientInfo;
@property (getter=isClientSourcedByNonStreamingProxyFrontedExtension, nonatomic) bool clientSourcedByNonStreamingProxyFrontedExtension;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void)availableDeviceProperties:(id)arg1 message:(id)arg2;
- (void)availableDevicesChanged:(id)arg1;
- (void)availablePluginProperties:(id)arg1 message:(id)arg2;
- (void)availableStreamProperties:(id)arg1 message:(id)arg2;
- (void)availableStreamsChangedWithDeviceID:(id)arg1 streamIDs:(id)arg2;
- (void)captureAsyncStillImage:(id)arg1 message:(id)arg2;
- (id)clientInfo;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)devicePropertiesChangedWithDeviceID:(id)arg1 propertyStates:(id)arg2;
- (void)devicePropertyStates:(id)arg1 message:(id)arg2;
- (void)deviceStates:(id)arg1 message:(id)arg2;
- (void)enqueueReactionEffect:(id)arg1 message:(id)arg2;
- (void)handleClientMessageWithConnection:(id)arg1 message:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isClientSourcedByNonStreamingProxyFrontedExtension;
- (bool)isInvalidated;
- (void)pluginPropertiesChanged:(id)arg1;
- (void)pluginPropertyStatesForProperties:(id)arg1 message:(id)arg2;
- (void)pluginStates:(id)arg1 message:(id)arg2;
- (void)pullSampleBufferForStreamID:(id)arg1 replyq:(id)arg2 reply:(id /* block */)arg3;
- (void)receivedSampleWithStreamID:(id)arg1 sample:(id)arg2;
- (id)redactedDescription;
- (void)setClientInfo:(id)arg1 message:(id)arg2;
- (void)setClientSourcedByNonStreamingProxyFrontedExtension:(bool)arg1;
- (void)setDevicePropertyValues:(id)arg1 message:(id)arg2;
- (void)setPluginPropertyValues:(id)arg1 message:(id)arg2;
- (void)setStreamPropertyValues:(id)arg1 message:(id)arg2;
- (void)startStream:(id)arg1 message:(id)arg2;
- (void)stopStream:(id)arg1 message:(id)arg2;
- (void)streamPropertiesChangedWithStreamID:(id)arg1 propertyStates:(id)arg2;
- (void)streamPropertyStates:(id)arg1 message:(id)arg2;
- (void)streamScheduledOutputChangedWithStreamID:(id)arg1 scheduledOutput:(id)arg2;
- (void)updateNonStreamingProxyFrontedExtensionPIDs:(id)arg1 message:(id)arg2;

@end
