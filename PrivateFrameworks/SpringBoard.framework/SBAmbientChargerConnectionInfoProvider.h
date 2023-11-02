
@interface SBAmbientChargerConnectionInfoProvider : NSObject <SBAccessoryConnectionInfoProviderObserver> {
    SBAccessoryConnectionInfoProvider * _accessoryConnectionInfoProvider;
    NSString * _connectedChargerConnectionUUID;
    NSString * _currentConnectedChargerId;
    <SBAmbientChargerConnectionInfoProviderDelegate> * _delegate;
}

@property (getter=isChargerConnected, nonatomic, readonly) bool chargerConnected;
@property (setter=_setCurrentConnectedChargerId:, nonatomic, copy) NSString *currentConnectedChargerId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBAmbientChargerConnectionInfoProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setCurrentConnectedChargerId:(id)arg1;
- (void)accessoryConnectionInfoProvider:(id)arg1 accessoryEndpointAttached:(id)arg2 transportType:(int)arg3 protocol:(int)arg4 properties:(id)arg5 forConnection:(id)arg6;
- (void)accessoryConnectionInfoProvider:(id)arg1 accessoryEndpointDetached:(id)arg2 forConnection:(id)arg3;
- (id)currentConnectedChargerId;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isChargerConnected;
- (void)setDelegate:(id)arg1;

@end
