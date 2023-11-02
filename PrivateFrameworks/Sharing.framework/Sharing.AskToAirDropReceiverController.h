
@interface Sharing.AskToAirDropReceiverController : NSObject {
    void airDropClient;
    void connectedNearbyDeviceNames;
    void connectionState;
    void connectionStateChangedHandler;
    void errorHandler;
    void hasPendingOrActiveConnections;
    void isLegacyMode;
    void isNearbyDeviceClose;
    void nearbyDeviceCloseChangedHandler;
    void nearbyDevicesDisplayName;
    void pendingOrActiveConnectionsChangedHandler;
    void privacyRemoteDeviceNames;
    void queue;
    void sharingName;
    void stateChangedHandler;
}

@property (nonatomic, copy) NSArray *connectedNearbyDeviceNames;
@property (nonatomic) long long connectionState;
@property (nonatomic, copy) id /* block */ connectionStateChangedHandler;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) bool hasPendingOrActiveConnections;
@property (nonatomic) bool hasSeenPrivacyPrompt;
@property (nonatomic) bool isLegacyMode;
@property (nonatomic) bool isNearbyDeviceClose;
@property (nonatomic, copy) id /* block */ nearbyDeviceCloseChangedHandler;
@property (nonatomic, copy) NSString *nearbyDevicesDisplayName;
@property (nonatomic, copy) id /* block */ pendingOrActiveConnectionsChangedHandler;
@property (nonatomic, readonly) OS_dispatch_queue *queue;
@property (nonatomic, copy) NSString *sharingName;
@property (nonatomic, copy) id /* block */ stateChangedHandler;

- (void).cxx_destruct;
- (void)connectToAllNearbyDevices;
- (id)connectedNearbyDeviceNames;
- (long long)connectionState;
- (id /* block */)connectionStateChangedHandler;
- (void)disconnectFromAllNearbyDevices;
- (id /* block */)errorHandler;
- (void)fetchPrivacyPromptInformationWithCompletion:(id /* block */)arg1;
- (void)fetchSharingNameWithCompletion:(id /* block */)arg1;
- (bool)hasPendingOrActiveConnections;
- (bool)hasSeenPrivacyPrompt;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isLegacyMode;
- (bool)isNearbyDeviceClose;
- (id /* block */)nearbyDeviceCloseChangedHandler;
- (id)nearbyDevicesDisplayName;
- (id /* block */)pendingOrActiveConnectionsChangedHandler;
- (id)queue;
- (void)setConnectedNearbyDeviceNames:(id)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setConnectionStateChangedHandler:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setHasPendingOrActiveConnections:(bool)arg1;
- (void)setHasSeenPrivacyPrompt:(bool)arg1;
- (void)setIsLegacyMode:(bool)arg1;
- (void)setIsNearbyDeviceClose:(bool)arg1;
- (void)setNearbyDeviceCloseChangedHandler:(id /* block */)arg1;
- (void)setNearbyDevicesDisplayName:(id)arg1;
- (void)setPendingOrActiveConnectionsChangedHandler:(id /* block */)arg1;
- (void)setSharingName:(id)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (id)sharingName;
- (id /* block */)stateChangedHandler;

@end
