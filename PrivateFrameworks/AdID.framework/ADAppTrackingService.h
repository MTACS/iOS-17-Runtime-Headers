
@interface ADAppTrackingService : ADSingleton <ADAppTracking_XPC, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    bool  _requestInFlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (nonatomic) bool requestInFlight;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deviceRegionEnabledPerStorefront:(id /* block */)arg1;
- (void)getAccountLevelSwitchDisabledReasonWithHandler:(id /* block */)arg1;
- (void)iTunesAccountStorefront:(id /* block */)arg1;
- (id)init;
- (void)latestPersonalizedAdsConsentVersion:(id /* block */)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)localAdServicesEnabled:(id /* block */)arg1;
- (void)reconcileDataForRecord:(id)arg1;
- (bool)requestInFlight;
- (void)sendPersonalizedAdsAndReconcileDataForRecord:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPersonalizedAds:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setRequestInFlight:(bool)arg1;
- (void)shouldAppStoreDisplayAdvertisingScreen:(id /* block */)arg1;
- (void)shouldDisplayPersonalizedAdsUI:(id /* block */)arg1;

@end
