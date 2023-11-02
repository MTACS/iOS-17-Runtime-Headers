
@interface ASDManagedAppService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (id)init;
- (void)requestStatusWithResultHandler:(id /* block */)arg1;
- (id)showVPPInviteForCurrentUser:(id)arg1 orgName:(id)arg2;
- (void)submitManifestRequest:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)submitVPPRequest:(id)arg1 withResultHandler:(id /* block */)arg2;

@end
