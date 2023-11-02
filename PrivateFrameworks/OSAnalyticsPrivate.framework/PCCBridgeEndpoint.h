
@interface PCCBridgeEndpoint : PCCEndpoint {
    OS_remote_device_browser * _device_browser;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSObject<OS_dispatch_queue> * _initializationQueue;
    NSMutableSet * _interruptedDevices;
    OS_xpc_remote_connection * _listeningConnection;
    NSMutableDictionary * _outgoingConnections;
    NSMutableDictionary * _remoteCRKeys;
    NSMutableDictionary * _remoteDevices;
}

+ (id)UDIDForRemoteDevice:(id)arg1;
+ (void)addSenderToMessage:(id)arg1;
+ (id)identifierForRemoteDevice:(id)arg1;
+ (bool)isSupportedRemoteDeviceType:(unsigned int)arg1;
+ (id)remoteDeviceForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)connectionForIdentifier:(id)arg1;
- (void)dealloc;
- (id)deviceIds;
- (void)enterInterruptedStateFrom:(id)arg1;
- (void)exitInterruptedStateFrom:(id)arg1;
- (id)identifierForTarget:(id)arg1;
- (id)init;
- (bool)isDeviceNearby:(id)arg1;
- (void)runWithDelegate:(id)arg1;
- (id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (id)send:(id)arg1 message:(id)arg2 error:(id*)arg3;
- (void)setupDeviceStateChangeHandler;
- (void)setupIncomingEventListener;
- (void)setupOutgoingConnection:(id)arg1;
- (void)stashCrashReporterKeyForIdentifier:(id)arg1;
- (id)synchronize:(id)arg1 withOptions:(id)arg2;

@end
