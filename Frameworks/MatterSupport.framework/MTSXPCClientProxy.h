
@interface MTSXPCClientProxy : HMFObject <MTSXPCServerInterface> {
    <MTSXPCConnection> * _connection;
    <MTSXPCClientProxyDelegate> * _delegate;
}

@property (readonly) <MTSXPCConnection> *connection;
@property <MTSXPCClientProxyDelegate> *delegate;
@property (readonly) bool hasDevicePairingEntitlement;
@property (readonly) bool hasMatterSetupPayloadEntitlement;
@property (readonly) bool hasPrivateHomeKitEntitlement;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (id)delegate;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)arg1;
- (bool)hasDevicePairingEntitlement;
- (bool)hasMatterSetupPayloadEntitlement;
- (bool)hasPrivateHomeKitEntitlement;
- (id)initWithConnection:(id)arg1;
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)performDeviceSetupUsingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDevicePairingWithUUID:(id)arg1 forSystemCommissionerPairingUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSystemCommissionerPairingWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)showRestrictedCharacteristicsAccessWarningAlert;

@end
