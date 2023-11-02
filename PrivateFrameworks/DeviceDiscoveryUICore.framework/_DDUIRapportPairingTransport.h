
@interface _DDUIRapportPairingTransport : NSObject <DDUIEndpointPairingBrowsingTransport, DDUIEndpointPairingListeningTransport> {
    id /* block */  _availableDevicesChangedHandler;
    RPCompanionLinkClient * _client;
    bool  _listeningForResponses;
    NSArray * _previousAvailableDevices;
    RPClient * _rpClient;
    NSMapTable * _transportSessionByUUID;
    unsigned int  _wantedDeviceTypes;
}

@property (nonatomic, readonly) NSArray *availableDevices;
@property (nonatomic, copy) id /* block */ availableDevicesChangedHandler;
@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool listeningForResponses;
@property (nonatomic, retain) NSArray *previousAvailableDevices;
@property (nonatomic, retain) RPClient *rpClient;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *transportSessionByUUID;
@property (nonatomic) unsigned int wantedDeviceTypes;

- (void).cxx_destruct;
- (void)_setupListeningForResponseMessagesIfNeeded;
- (void)activateForDeviceTypes:(unsigned int)arg1 withCompletion:(id /* block */)arg2;
- (id)availableDevices;
- (id /* block */)availableDevicesChangedHandler;
- (id)client;
- (void)createListenerMappingForDevice:(id)arg1 forServiceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithMode:(unsigned long long)arg1;
- (id)initWithMode:(unsigned long long)arg1 companionLinkClient:(id)arg2;
- (void)invalidate;
- (bool)listeningForResponses;
- (id)previousAvailableDevices;
- (id)rpClient;
- (id)sessionForDevice:(id)arg1 bundleID:(id)arg2 serviceIdentifier:(id)arg3 error:(id*)arg4;
- (void)setAvailableDevicesChangedHandler:(id /* block */)arg1;
- (void)setClient:(id)arg1;
- (void)setListeningForResponses:(bool)arg1;
- (void)setPreviousAvailableDevices:(id)arg1;
- (void)setRpClient:(id)arg1;
- (void)setTransportSessionByUUID:(id)arg1;
- (void)setWantedDeviceTypes:(unsigned int)arg1;
- (void)setupListeningForSessionsWithHandler:(id /* block */)arg1;
- (void)shouldReauthenticateDevice:(id)arg1 forServiceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)transportSessionByUUID;
- (unsigned int)wantedDeviceTypes;

@end
