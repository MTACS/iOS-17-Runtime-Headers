
@interface AXHeardController : NSObject <HCHeardControllerProtocol, UNUserNotificationCenterDelegate> {
    bool  _bluetoothReady;
    HCXPCMessage * _boostMessage;
    NSArray * _clients;
    bool  _finishedSetup;
    NSDictionary * _handlers;
    NSObject<OS_dispatch_queue> * _personalAudioQueue;
    NSObject<OS_xpc_object> * _service;
    bool  _shouldShutdown;
    AXDispatchTimer * _shutdownTimer;
    AXDispatchTimer * _transparencyHysteresisTimer;
}

@property (nonatomic, retain) HCXPCMessage *boostMessage;
@property (nonatomic, retain) NSArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *personalAudioQueue;
@property (readonly) Class superclass;

+ (id)entitlementsForMessageID:(unsigned long long)arg1;
+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_setShutdownTimer;
- (void)_shouldBeRunning:(id /* block */)arg1;
- (void)_shutdownIfPossible;
- (void)addHandler:(id)arg1 andBlock:(id /* block */)arg2 forMessageIdentifier:(unsigned long long)arg3;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (id)boostMessage;
- (id)boostPriority:(id)arg1;
- (id)clients;
- (bool)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2;
- (void)continueSetup;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)handleNewConnection:(id)arg1;
- (id)handlers;
- (id)init;
- (id)personalAudioQueue;
- (void)registerFakeClient:(id)arg1;
- (void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;
- (bool)sendMessage:(id)arg1 withError:(id*)arg2;
- (void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)setBoostMessage:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setPersonalAudioQueue:(id)arg1;
- (void)shutdownIfPossible;
- (void)startServer;
- (void)updateAnalytics;
- (void)updateHearingControlCenterModule;
- (void)updatePersonalAudioSettingsOnAccessories;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
