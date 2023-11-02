
@interface GCSettingsXPCProxyClientEndpoint : NSObject <GCControllerSettingsComponent, GCSettingsXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointClient> {
    id /* block */  _changedHandler;
    id  _connectionInterruptionRegistration;
    id  _connectionInvalidationRegistration;
    GCController * _controller;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    <GCSettingsXPCProxyRemoteServerEndpointInterface> * _serverEndpoint;
    GCSProfile * _settingsProfile;
}

@property (nonatomic, copy) id /* block */ changedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, readonly) GCSProfile *settingsProfile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_remoteEndpointHasSetProfile:(id)arg1;
- (id /* block */)changedHandler;
- (void)fetchObjectIdentifierWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialValueForProfile:(id)arg2;
- (void)invalidateConnection;
- (void)newProfile:(id)arg1;
- (void)refreshProfile;
- (void)setChangedHandler:(id /* block */)arg1;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (id)settingsProfile;

@end
