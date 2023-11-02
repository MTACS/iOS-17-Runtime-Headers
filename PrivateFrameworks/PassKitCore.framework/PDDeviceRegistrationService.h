
@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {
    PDDeviceRegistrationServiceCoordinator * _deviceRegistrationServiceCoordinator;
    PKEntitlementWhitelist * _whitelist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deviceRegistrationServiceCoordinator;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 server:(id)arg2;
- (void)performDeviceRegistrationReturningContextForReason:(id)arg1 brokerURL:(id)arg2 actionType:(long long)arg3 completion:(id /* block */)arg4;
- (void)setDeviceRegistrationServiceCoordinator:(id)arg1;

@end
