
@interface TVRCXPCClient : NSObject <TVRCXPCRequestProtocol> {
    NSMutableDictionary * _eventObserversByID;
    <TVRCXPCRequestProtocol> * _remoteObject;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *eventObserversByID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <TVRCXPCRequestProtocol> *remoteObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_broadcastStateUpdateToDevices:(id)arg1;
- (void)_disconnectAllDevices;
- (void)_postInvalidationNotification;
- (void)_setupConnectionIfNeeded;
- (void)addEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)beginDeviceQuery;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
- (void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2;
- (void)deviceQueryUpdatedDiscoveredDevices:(id)arg1;
- (void)deviceUpdatedState:(id)arg1;
- (void)deviceWithState:(id)arg1 encounteredAuthChallengeOfType:(long long)arg2 attributes:(long long)arg3 codeToEnterOnDevice:(id)arg4 throttleSeconds:(long long)arg5;
- (void)enableFindingSession:(bool)arg1 forDeviceIdentifier:(id)arg2;
- (void)enableTVRemoteOnLockscreen:(bool)arg1 forDeviceIdentifier:(id)arg2;
- (void)endDeviceQuery;
- (id)eventObserversByID;
- (void)fetchActiveMREndpointUIDWithCompletion:(id /* block */)arg1;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
- (void)getConnectionStatusToDeviceWithIdentifier:(id)arg1 response:(id /* block */)arg2;
- (void)getSuggestedDevicesWithResponse:(id /* block */)arg1;
- (id)init;
- (void)launchViewServiceForDeviceWithIdentifier:(id)arg1;
- (void)openConnectionToDeviceWithIdentifier:(id)arg1 connectionContext:(long long)arg2;
- (id)remoteObject;
- (void)removeEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(id /* block */)arg4;
- (void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
- (void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)setEventObserversByID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)suggestedDevices:(id)arg1;
- (id)xpcConnection;

@end
