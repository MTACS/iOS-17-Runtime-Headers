
@interface CMIOExtensionProviderHostContext : NSObject <CMIOExtensionProtocol> {
    NSObject<OS_xpc_object> * _connection;
    <CMIOExtensionProviderHostDelegate> * _delegate;
    NSString * _description;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _redactedDescription;
    NSObject<OS_dispatch_group> * _transactionGroup;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CMIOExtensionProviderHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)availableDevicePropertiesWithDeviceID:(id)arg1 reply:(id /* block */)arg2;
- (void)availableDevicesChanged:(id)arg1 message:(id)arg2;
- (void)availablePluginProperties:(id /* block */)arg1;
- (void)availableStreamPropertiesWithStreamID:(id)arg1 reply:(id /* block */)arg2;
- (void)availableStreamsChanged:(id)arg1 message:(id)arg2;
- (void)captureAsyncStillImageWithStreamID:(id)arg1 uniqueID:(long long)arg2 options:(id)arg3 reply:(id /* block */)arg4;
- (void)completeTransaction;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)devicePropertiesChanged:(id)arg1 message:(id)arg2;
- (void)devicePropertyStatesWithDeviceID:(id)arg1 properties:(id)arg2 reply:(id /* block */)arg3;
- (void)deviceStatesWithDeviceID:(id)arg1 reply:(id /* block */)arg2;
- (void)enqueueReactionEffect:(id)arg1 reactionType:(id)arg2 reply:(id /* block */)arg3;
- (void)handleClientMessageWithConnection:(id)arg1 message:(id)arg2;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (bool)isInvalidated;
- (void)pluginPropertiesChanged:(id)arg1 message:(id)arg2;
- (void)pluginPropertyStatesForProperties:(id)arg1 reply:(id /* block */)arg2;
- (void)pluginStates:(id /* block */)arg1;
- (void)pullSample:(id)arg1 message:(id)arg2;
- (void)receivedSample:(id)arg1 message:(id)arg2;
- (id)redactedDescription;
- (void)refreshExtensionConnection;
- (void)scheduledOutputChanged:(id)arg1 message:(id)arg2;
- (void)sendEmptyClientInfo;
- (void)setDevicePropertyValuesWithDeviceID:(id)arg1 propertyValues:(id)arg2 reply:(id /* block */)arg3;
- (void)setPluginPropertyValues:(id)arg1 reply:(id /* block */)arg2;
- (void)setStreamPropertyValuesWithStreamID:(id)arg1 propertyValues:(id)arg2 reply:(id /* block */)arg3;
- (void)startStreamWithStreamID:(id)arg1 reply:(id /* block */)arg2;
- (void)stopStreamWithStreamID:(id)arg1 reply:(id /* block */)arg2;
- (void)streamPropertiesChanged:(id)arg1 message:(id)arg2;
- (void)streamPropertyStatesWithStreamID:(id)arg1 properties:(id)arg2 reply:(id /* block */)arg3;

@end
