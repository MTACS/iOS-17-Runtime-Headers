
@interface TSRecommendedCarrierAppsFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSMutableArray * _carrierApps;
    CoreTelephonyClient * _client;
}

@property (retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createFirstViewController;
- (id)_getValueFromCountryBunbleByKey:(id)arg1;
- (void)_requestCarrierAppsWithCompletion:(id /* block */)arg1;
- (id)client;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)init;
- (void)setClient:(id)arg1;

@end
